#include <networking/protocol/tcp/details/networking_tcp_io_exec.h>

void
__do_recv_from(void* pVoidAioHnd)
{
	__synapse_networking_tcp_io_request *ptr_tcp_ioreq
		= pVoidAioHnd;
	synapse_networking_tcp hnd_tcp
		= { .opaque = ptr_tcp_ioreq->ioreq_tcp_hnd };

	ptr_tcp_ioreq->ioreq_completion
		(hnd_tcp, ptr_tcp_ioreq->ioreq_completion_size);
}

void
__do_send_to  (void* pVoidAioHnd)
{
	__synapse_networking_tcp_io_request *ptr_tcp_ioreq
		= pVoidAioHnd;
	synapse_networking_tcp hnd_tcp
		= { .opaque = ptr_tcp_ioreq->ioreq_tcp_hnd };

	ptr_tcp_ioreq->ioreq_completion
		(hnd_tcp, ptr_tcp_ioreq->ioreq_completion_size);
}

void
__synapse_networking_tcp_do_recv_from
	(DWORD pErrorCode, DWORD pTransfer, LPWSAOVERLAPPED pAioHnd, DWORD pFlags)
{
	__synapse_networking_tcp_io_request *ptr_tcp_ioreq
		= pAioHnd;
	synapse_execution_sched_traits      *ptr_tcp_sched
		= ptr_tcp_ioreq->ioreq_tcp_hnd->hnd_tcp_sched;

	if(pTransfer != -1)
		ptr_tcp_sched->dispatch_from_proc
			(ptr_tcp_sched->hnd_sched, &__do_recv_from, pAioHnd);
	else
		ptr_tcp_sched->dispatch_from_proc
			(ptr_tcp_sched->hnd_sched, 
			 ptr_tcp_ioreq->ioreq_tcp_hnd->tcp_aio_disconnected, NULL);
}

void
__synapse_networking_tcp_do_send_to
	(DWORD pErrorCode, DWORD pTransfer, LPWSAOVERLAPPED pAioHnd, DWORD pFlags)
{
	__synapse_networking_tcp_io_request *ptr_tcp_ioreq
		= pAioHnd;
	synapse_execution_sched_traits      *ptr_tcp_sched
		= ptr_tcp_ioreq->ioreq_tcp_hnd->hnd_tcp_sched;

	ptr_tcp_sched->dispatch_from_proc
		(ptr_tcp_sched->hnd_sched, &__do_send_to, pAioHnd);
}