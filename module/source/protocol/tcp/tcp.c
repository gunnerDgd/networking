#include <networking/protocol/tcp/details/networking_tcp_init.h>
#include <synapse/networking/protocol/tcp/tcp.h>

synapse_networking_export
synapse_tcp_handle
	synapse_tcp_initialize_v4
		(synapse_tcp_on_connected    pTcpConn,
		 synapse_tcp_on_disconnected pTcpDisconn)
{
	synapse_networking_opaque_init
		(synapse_tcp_handle, hnd_tcp,
			__synapse_networking_tcp_initialize_v4
					(pTcpConn, pTcpDisconn));

	return
		hnd_tcp;
}

synapse_networking_export
void
	synapse_tcp_cleanup
		(synapse_tcp_handle pHandle)
{
	__synapse_networking_tcp_cleanup
		(synapse_networking_opaque_reference
			(pHandle));
}