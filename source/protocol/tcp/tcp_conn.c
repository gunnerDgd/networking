#include <networking/protocol/tcp/tcp_conn.h>
#include <networking/protocol/tcp/details/networking_tcp_conn.h>

synapse_networking_tcp_dll
bool
synapse_networking_tcp_connect_v4
	(synapse_networking_tcp pTcp, synapse_networking_address_v4 pV4Addr)
{
	return
		__synapse_networking_tcp_connect_v4
			(synapse_networking_opaque_reference(pTcp),
			 synapse_networking_opaque_reference(pV4Addr));
}

synapse_networking_tcp_dll
void
synapse_networking_tcp_disconnect
	(synapse_networking_tcp pTcp)
{
	__synapse_networking_tcp_disconnect
		(synapse_networking_opaque_reference(pTcp));
}