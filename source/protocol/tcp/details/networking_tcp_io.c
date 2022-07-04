#include <networking/protocol/tcp/details/networking_tcp_io.h>
#include <networking/protocol/tcp/details/networking_tcp_io_exec.h>

void
__synapse_networking_tcp_send_to
	(__synapse_networking_tcp* pTcp, __synapse_networking_tcp_io_request* pIoReq)
{
	WSASend
		(pTcp->hnd_tcp, 
		&pIoReq->ioreq_buffer, 1,
		&pIoReq->ioreq_completion_size, 0,
		&pIoReq->ioreq_aio_hnd,
		&__synapse_networking_tcp_do_send_to);
}

void
__synapse_networking_tcp_receive_from
	(__synapse_networking_tcp* pTcp, __synapse_networking_tcp_io_request* pIoReq)
{
	WSARecv
		(pTcp->hnd_tcp, 
		&pIoReq->ioreq_buffer, 1,
		&pIoReq->ioreq_completion_size, 0,
		&pIoReq->ioreq_aio_hnd,
		&__synapse_networking_tcp_do_recv_from);
}