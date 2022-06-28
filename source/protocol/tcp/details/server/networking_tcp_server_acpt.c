#include <networking/protocol/tcp/details/server/networking_tcp_server_acpt.h>
#include <stdlib.h>

void
__do_accept(void* pVoidTcpHnd)
{
	__synapse_networking_tcp* ptr_tcp
		= pVoidTcpHnd;
	synapse_networking_tcp    hnd_tcp
		= { .opaque = ptr_tcp };

	ptr_tcp->tcp_aio_connected(hnd_tcp);
}

__synapse_networking_tcp*
__synapse_networking_tcp_server_accept_once
	(__synapse_networking_tcp_server* pTcpSrv)
{
	__synapse_networking_tcp* ptr_tcp_cli
		= malloc(sizeof(__synapse_networking_tcp));
	SOCKADDR_IN ptr_tcp_cli_addr;
	int		    ptr_tcp_cli_addr_size = sizeof(SOCKADDR_IN);

	ptr_tcp_cli->hnd_tcp
		= accept(pTcpSrv->hnd_tcp_srv, 
				&ptr_tcp_cli_addr	 ,
				&ptr_tcp_cli_addr_size);

	ptr_tcp_cli->tcp_aio_connected
		= pTcpSrv->tcp_cli_init_conn;
	ptr_tcp_cli->tcp_aio_disconnected
		= pTcpSrv->tcp_cli_init_disconn;

	ptr_tcp_cli->hnd_tcp_sched
		= pTcpSrv->tcp_srv_exec;
	ptr_tcp_cli->hnd_tcp_sched->dispatch_from_proc
		(ptr_tcp_cli->hnd_tcp_sched->hnd_sched, &__do_accept, ptr_tcp_cli);

	return ptr_tcp_cli;
}

void
__synapse_networking_tcp_server_accept_multiple
	(__synapse_networking_tcp_server* pTcpSrv, synapse_networking_tcp* pTcpArray, size_t pCount)
{
	while(--pCount != -1)
		pTcpArray[pCount].opaque 
			= __synapse_networking_tcp_server_accept_once(pTcpSrv);
}