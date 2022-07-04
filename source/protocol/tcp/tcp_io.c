#include <networking/protocol/tcp/tcp_io.h>
#include <networking/protocol/tcp/details/networking_tcp_io.h>

void
synapse_networking_tcp_send_to
	(synapse_networking_tcp pTcp, synapse_networking_tcp_io_request pIoReq)
{
	__synapse_networking_tcp_send_to
			(synapse_networking_opaque_reference(pTcp),
			 synapse_networking_opaque_reference(pIoReq));
}

void
synapse_networking_tcp_receive_from
	(synapse_networking_tcp pTcp, synapse_networking_tcp_io_request pIoReq)
{
	__synapse_networking_tcp_receive_from
		(synapse_networking_opaque_reference(pTcp),
		 synapse_networking_opaque_reference(pIoReq));
}