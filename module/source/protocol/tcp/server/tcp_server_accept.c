#include <synapse/networking/protocol/tcp/server/tcp_server_accept.h>
#include <networking/protocol/tcp/details/server/networking_tcp_server_acpt.h>
#include <networking/protocol/tcp/details/server/networking_tcp_server_init.h>

synapse_networking_export
void
synapse_tcp_server_bind_v4
	(synapse_tcp_server_handle pHandle, synapse_networking_address_v4 pV4Address)
{
	__synapse_networking_tcp_server_bind_v4
		(pV4Address, synapse_networking_opaque_reference(pHandle));
}

synapse_networking_export
void
synapse_tcp_server_listen
	(synapse_tcp_server_handle pHandle, uint32_t pBacklog)
{
	__synapse_networking_tcp_server_listen
		(synapse_networking_opaque_reference(pHandle), pBacklog);
}

synapse_networking_export
synapse_tcp_handle
synapse_tcp_server_accept_once
	(synapse_tcp_server_handle pHandle)
{
	synapse_networking_opaque_init
		(synapse_tcp_handle, hnd_tcp,
			__synapse_networking_tcp_server_accept_once
				(synapse_networking_opaque_reference(pHandle)));

	return
		hnd_tcp;
}

synapse_networking_export
void
synapse_tcp_server_accept_multiple
	(synapse_tcp_server_handle pHandle, synapse_tcp_handle* pTcpArray, size_t pTcpCount)
{
	while(pTcpCount-- != -1)
		pTcpArray[pTcpCount]
			= synapse_tcp_server_accept_once
					(pHandle);
}