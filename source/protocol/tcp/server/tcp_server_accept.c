#include <networking/protocol/tcp/server/tcp_server_accept.h>
#include <networking/protocol/tcp/details/server/networking_tcp_server_acpt.h>

synapse_networking_tcp
synapse_networking_tcp_server_accept_v4_once
	(synapse_networking_tcp_server pTcpServer)
{
	synapse_networking_opaque_init
		(synapse_networking_tcp, ptr_tcp,
			__synapse_networking_tcp_server_accept_v4_once
				(synapse_networking_opaque_reference(pTcpServer)));

	return
		ptr_tcp;
}

void
synapse_networking_tcp_server_accept_v4_multiple
	(synapse_networking_tcp_server pTcpSrv, synapse_networking_tcp* pTcpCli, size_t pCount)
{
	__synapse_networking_tcp_server_accept_v4_multiple
		(synapse_networking_opaque_reference(pTcpSrv), 
			pTcpCli, pCount);
}