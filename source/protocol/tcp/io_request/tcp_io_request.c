#include <networking/protocol/tcp/io_request/tcp_io_request.h>
#include <networking/protocol/tcp/details/io_request/networking_tcp_io_request.h>

synapse_networking_tcp_dll
synapse_networking_tcp_io_request
synapse_networking_tcp_io_request_initialize
	(void							  *pTcpIoPtr ,
	 size_t							   pTcpIoSize, 
	 void							 (*pTcpIoComp)(size_t, void*),
	 void							  *pTcpAdditional)
{
	synapse_networking_opaque_init
		(synapse_networking_tcp_io_request, ptr_ioreq,
			__synapse_networking_tcp_io_request_initialize
				(pTcpIoPtr, pTcpIoSize, pTcpIoComp, pTcpAdditional));

	return
		ptr_ioreq;
}

synapse_networking_tcp_dll
synapse_networking_tcp_io_request
synapse_networking_tcp_io_request_initialize_from_existing
	(synapse_networking_tcp_io_request pIoReq	 ,
	 void							  *pTcpIoPtr , 
	 size_t							   pTcpIoSize, 
	 void							 (*pTcpIoComp)(size_t, void*),
	 void							  *pTcpAdditional)
{
	synapse_networking_opaque_reference(pIoReq)
		= __synapse_networking_tcp_io_request_initialize_from_existing
				(synapse_networking_opaque_reference(pIoReq),
					pTcpIoPtr, pTcpIoSize, pTcpIoComp, pTcpAdditional);

	return
		pIoReq;
}

synapse_networking_tcp_dll
void
synapse_networking_tcp_io_request_cleanup
	(synapse_networking_tcp_io_request pIoReq)
{
	__synapse_networking_tcp_io_request_cleanup
		(synapse_networking_opaque_reference(pIoReq));
}