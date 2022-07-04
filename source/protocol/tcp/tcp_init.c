#include <networking/protocol/tcp/tcp_type.h>
#include <networking/protocol/tcp/details/networking_tcp_init.h>

synapse_networking_tcp
synapse_networking_tcp_initialize_v4
	(synapse_networking_tcp_connected    pTcpConn, 
	 synapse_networking_tcp_disconnected pTcpDisconn)
{
	synapse_networking_opaque_init
		(synapse_networking_tcp, ptr_tcp,
			__synapse_networking_tcp_initialize_v4(pTcpConn, pTcpDisconn));

	return
		ptr_tcp;
}



void
synapse_networking_tcp_cleanup
	(synapse_networking_tcp pTcp)
{
	__synapse_networking_tcp_cleanup
		(synapse_networking_opaque_reference(pTcp));
}