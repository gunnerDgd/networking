#include <networking/protocol/tcp/details/io_request/networking_tcp_io_request.h>
#include <stdlib.h>

__synapse_networking_tcp_io_request*
__synapse_networking_tcp_io_request_initialize
	(void							  *pTcpIoPtr ,
	 size_t							   pTcpIoSize,
	 void							 (*pTcpIoComp)(size_t, void*),
	 void							  *pTcpIoAdditional)
{
	__synapse_networking_tcp_io_request* ptr_ioreq
		= malloc(sizeof(__synapse_networking_tcp_io_request));

	ptr_ioreq->ioreq_buffer.buf 
		= pTcpIoPtr ;
	ptr_ioreq->ioreq_buffer.len 
		= pTcpIoSize;
	
	ptr_ioreq->ptr_ioreq_completion 
		= pTcpIoComp;
	ptr_ioreq->ptr_ioreq_completion_param
		= pTcpIoAdditional;
	
	return ptr_ioreq;
}

__synapse_networking_tcp_io_request*
__synapse_networking_tcp_io_request_initialize_from_existing
	(__synapse_networking_tcp_io_request *pIoReq					,
	 void								 *pTcpIoPtr					,
	 size_t								  pTcpIoSize				,
	 void								(*pTcpIoComp)(size_t, void*),
	 void								 *pTcpIoAdditional)
{
	pIoReq->ioreq_buffer.buf 
		= pTcpIoPtr;
	pIoReq->ioreq_buffer.len 
		= pTcpIoSize;

	pIoReq->ptr_ioreq_completion 
		= pTcpIoComp;
	pIoReq->ptr_ioreq_completion_param
		= pTcpIoAdditional;

	return pIoReq;
}

void
__synapse_networking_tcp_io_request_cleanup
	(__synapse_networking_tcp_io_request* pIoReq)
{
	free
		(pIoReq);
}