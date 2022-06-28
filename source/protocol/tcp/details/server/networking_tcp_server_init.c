#include <networking/protocol/tcp/details/server/networking_tcp_server_init.h>
#include <networking/address/v4/details/networking_address_v4_type.h>

__synapse_networking_tcp_server*
__synapse_networking_tcp_server_initialize_v4
	(synapse_execution_sched_traits		    *pSrvExec       ,
	 synapse_networking_tcp_connected		 pCliInitConn   ,
	 synapse_networking_tcp_disconnected	 pCliInitDisconn)
{
	__synapse_networking_tcp_server* ptr_srv
		= malloc(sizeof(__synapse_networking_tcp_server));

	ptr_srv->tcp_cli_init_conn
		= pCliInitConn;
	ptr_srv->tcp_cli_init_disconn
		= pCliInitDisconn;

	ptr_srv->hnd_tcp_srv
		= socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	ptr_srv->tcp_srv_exec
		= pSrvExec;

	return ptr_srv;
}

void
__synapse_networking_tcp_server_bind_v4
	(synapse_networking_address_v4 pV4Addr, __synapse_networking_tcp_server* pTcpSrv)
{
	bind
		(pTcpSrv->hnd_tcp_srv,
			&synapse_networking_opaque_cast(pV4Addr, __synapse_networking_address_v4*)
				->hnd_v4_addr, sizeof(SOCKADDR_IN));
}

void
__synapse_networking_tcp_server_listen
	(__synapse_networking_tcp_server* pTcpSrv, uint32_t pBacklog)
{
	listen
		(pTcpSrv->hnd_tcp_srv, pBacklog);
}

void
__synapse_networkling_tcp_server_cleanup
	(__synapse_networking_tcp_server* pTcpSrv)
{
	closesocket
		(pTcpSrv->hnd_tcp_srv);
	free
		(pTcpSrv);
}