#include <networking/protocol/tcp/details/io_request/networking_tcp_io_request.h>
#include <networking/protocol/tcp/details/networking_tcp_io.h>

#include <synapse/networking/protocol/tcp/tcp_io_request.h>


synapse_networking_export
synapse_tcp_io_request
	synapse_tcp_io_request_initialize
		(synapse_tcp_handle		   pIoHnd, 
		 void					  *pIoPtr, 
		 size_t					   pIoSize, 
		 synapse_tcp_on_completion pIoComp, 
		 void					  *pAdditional)
{
	synapse_networking_opaque_init
		(synapse_tcp_io_request, hnd_ioreq,
			__synapse_networking_tcp_io_request_initialize
				(synapse_networking_opaque_reference(pIoHnd),
					pIoPtr, pIoSize, pIoComp, pAdditional));
	
	return
		hnd_ioreq;
}

synapse_networking_export
void
	synapse_tcp_io_request_cleanup
		(synapse_tcp_io_request pIoReq)
{
	__synapse_networking_tcp_io_request_cleanup
		(synapse_networking_opaque_reference(pIoReq));
}

synapse_networking_export
void
	synapse_tcp_send_to
		(synapse_tcp_handle pIoHnd, synapse_tcp_io_request pIoReq)
{
	__synapse_networking_tcp_send_to
		(synapse_networking_opaque_reference(pIoHnd),
		 synapse_networking_opaque_reference(pIoReq));
}

synapse_networking_export
void
	synapse_tcp_receive_from
		(synapse_tcp_handle pIoHnd, synapse_tcp_io_request pIoReq)
{
	__synapse_networking_tcp_receive_from
		(synapse_networking_opaque_reference(pIoHnd),
		 synapse_networking_opaque_reference(pIoReq));
}