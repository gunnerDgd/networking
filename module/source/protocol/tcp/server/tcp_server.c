#include <synapse/networking/protocol/tcp/server/tcp_server.h>
#include <networking/protocol/tcp/details/server/networking_tcp_server_init.h>

synapse_networking_export
synapse_tcp_server_handle
synapse_tcp_server_initialize_v4
	(synapse_tcp_on_connected pOnConn, synapse_tcp_on_disconnected pOnDisconn)
{
	synapse_networking_opaque_init
		(synapse_tcp_server_handle, ptr_hnd,
			__synapse_networking_tcp_server_initialize_v4
				(pOnConn, pOnDisconn));

	return ptr_hnd;
}

synapse_networking_export
void
synapse_tcp_server_cleanup
	(synapse_tcp_server_handle pHandle)
{
	__synapse_networkling_tcp_server_cleanup
		(synapse_networking_opaque_reference(pHandle));
}