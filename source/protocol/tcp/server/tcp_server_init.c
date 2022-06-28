#include <networking/protocol/tcp/server/tcp_server_init.h>
#include <networking/protocol/tcp/details/server/networking_tcp_server_init.h>

synapse_networking_tcp_server
synapse_networking_tcp_server_initialize_v4
	(synapse_execution_sched_traits*	 pSched, 
	 synapse_networking_tcp_connected    pCliInitConn,
	 synapse_networking_tcp_disconnected pCliInitDisconn)
{
	synapse_networking_opaque_init
		(synapse_networking_tcp_server, ptr_tcp_srv,
			__synapse_networking_tcp_server_initialize_v4
				(pSched, pCliInitConn, pCliInitDisconn));

	return
		ptr_tcp_srv;
}

void
synapse_networking_tcp_server_bind_v4
	(synapse_networking_tcp_server pTcpSrv, synapse_networking_address_v4 pV4Addr)
{
	__synapse_networking_tcp_server_bind_v4
		(pV4Addr, synapse_networking_opaque_reference(pTcpSrv));
}

void
synapse_networking_tcp_server_listen
	(synapse_networking_tcp_server pTcpSrv, uint32_t pBacklog)
{
	__synapse_networking_tcp_server_listen
		(synapse_networking_opaque_reference(pTcpSrv), pBacklog);
}

void
synapse_networking_tcp_server_cleanup
	(synapse_networking_tcp_server pTcpSrv)
{
	__synapse_networkling_tcp_server_cleanup
		(synapse_networking_opaque_reference(pTcpSrv));
}