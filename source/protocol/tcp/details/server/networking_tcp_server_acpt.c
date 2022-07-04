#include <networking/protocol/tcp/details/server/networking_tcp_server_acpt.h>
#include <stdlib.h>

__synapse_networking_tcp*
__synapse_networking_tcp_server_accept_v4_once
	(__synapse_networking_tcp_server* pTcpSrv)
{
	__synapse_networking_tcp* ptr_tcp_cli
		= malloc(sizeof(__synapse_networking_tcp));
	synapse_networking_tcp    hnd_tcp_cli
		= { .opaque = ptr_tcp_cli };

	ptr_tcp_cli->hnd_tcp_addr_size
		= sizeof(SOCKADDR_IN);
	ptr_tcp_cli->hnd_tcp
		= accept(pTcpSrv->hnd_tcp_srv, 
				&ptr_tcp_cli->hnd_tcp_addr_v4.hnd_v4_addr,
				&ptr_tcp_cli->hnd_tcp_addr_size);

	

	ptr_tcp_cli->tcp_aio_disconnected.ptr_ondisconn_routine
		= pTcpSrv->tcp_cli_init_disconn.ptr_ondisconn_routine;
	ptr_tcp_cli->tcp_aio_disconnected.ptr_ondisconn_parameter
		= pTcpSrv->tcp_cli_init_disconn.ptr_ondisconn_parameter;

	pTcpSrv->tcp_cli_init_conn.evt_handler
		(hnd_tcp_cli, pTcpSrv->tcp_cli_init_conn.evt_handler_param);

	return ptr_tcp_cli;
}

void
__synapse_networking_tcp_server_accept_v4_multiple
	(__synapse_networking_tcp_server* pTcpSrv, synapse_networking_tcp* pTcpArray, size_t pCount)
{
	while(--pCount != -1)
		pTcpArray[pCount].opaque 
			= __synapse_networking_tcp_server_accept_v4_once(pTcpSrv);
}