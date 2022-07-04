#include <networking/protocol/tcp/details/networking_tcp_io_exec.h>

void
__do_recv_from(void* pVoidAioHnd)
{
	__synapse_networking_tcp_io_request *ptr_tcp_ioreq
		= pVoidAioHnd;
	
	ptr_tcp_ioreq->ptr_ioreq_completion
		(ptr_tcp_ioreq->ioreq_completion_size, 
		 ptr_tcp_ioreq->ptr_ioreq_completion_param);
}

void
__do_send_to  (void* pVoidAioHnd)
{
	__synapse_networking_tcp_io_request *ptr_tcp_ioreq
		= pVoidAioHnd;
	
	ptr_tcp_ioreq->ptr_ioreq_completion
		(ptr_tcp_ioreq->ioreq_completion_size, 
		 ptr_tcp_ioreq->ptr_ioreq_completion_param);
}

void
__synapse_networking_tcp_do_recv_from
	(DWORD pErrorCode, DWORD pTransfer, LPWSAOVERLAPPED pAioHnd, DWORD pFlags)
{
	__synapse_networking_tcp_io_request *ptr_tcp_ioreq
		= pAioHnd;
	__do_recv_from
		(ptr_tcp_ioreq);
}

void
__synapse_networking_tcp_do_send_to
	(DWORD pErrorCode, DWORD pTransfer, LPWSAOVERLAPPED pAioHnd, DWORD pFlags)
{
	__synapse_networking_tcp_io_request *ptr_tcp_ioreq
		= pAioHnd;
	__do_send_to
		(ptr_tcp_ioreq);
}