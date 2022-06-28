#include <networking/protocol/tcp/details/networking_tcp_init.h>
#include <networking/address/v4/details/networking_address_v4.h>

__synapse_networking_tcp*
__synapse_networking_tcp_initialize_v4
	(synapse_execution_sched_traits*	 pSched, 
	 synapse_networking_tcp_connected    pTcpConn, 
	 synapse_networking_tcp_disconnected pTcpDisconn)
{
	__synapse_networking_tcp* ptr_tcp
		= malloc(sizeof(__synapse_networking_tcp));

	ptr_tcp->hnd_tcp
		= socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	ptr_tcp->hnd_tcp_sched
		= pSched;
	
	ptr_tcp->tcp_aio_connected
		= pTcpConn;
	ptr_tcp->tcp_aio_disconnected
		= pTcpDisconn;

	return ptr_tcp;
}

__synapse_networking_tcp_io_request*
__synapse_networking_tcp_io_request_initialize
	(__synapse_networking_tcp		  *pTcpHnd   ,
	 void							  *pTcpIoPtr ,
	 size_t							   pTcpIoSize,
	 synapse_networking_tcp_completion pTcpIoComp)
{
	__synapse_networking_tcp_io_request* ptr_ioreq
		= malloc(sizeof(__synapse_networking_tcp_io_request));

	ptr_ioreq->ioreq_buffer.buf = pTcpIoPtr ;
	ptr_ioreq->ioreq_buffer.len = pTcpIoSize;
	
	ptr_ioreq->ioreq_completion = pTcpIoComp;
	ptr_ioreq->ioreq_tcp_hnd    = pTcpHnd   ;
	
	return ptr_ioreq;
}

__synapse_networking_tcp_io_request*
__synapse_networking_tcp_io_request_initialize_from_existing
	(__synapse_networking_tcp_io_request *pIoReq, 
	 __synapse_networking_tcp			 *pTcpHnd, 
	 void								 *pTcpIoPtr, 
	 size_t								  pTcpIoSize,
	 synapse_networking_tcp_completion    pTcpIoComp)
{
	pIoReq->ioreq_buffer.buf = pTcpIoPtr;
	pIoReq->ioreq_buffer.len = pTcpIoSize;

	pIoReq->ioreq_completion = pTcpIoComp;
	pIoReq->ioreq_tcp_hnd    = pTcpHnd;

	return pIoReq;
}

void
__synapse_networking_tcp_cleanup
	(__synapse_networking_tcp* pTcp)
{
	closesocket
		(pTcp->hnd_tcp);
	free
		(pTcp);
}

void
__synapse_networking_tcp_io_request_cleanup
	(__synapse_networking_tcp_io_request* pIoReq)
{
	free
		(pIoReq);
}