#include <networking/tcp/details/aio/aio_tcp_manip.h>

void
    __synapse_networking_tcp_aio_completion_routine
        (uint32_t                         pIoErrorCode, 
         uint32_t                         pIoSize, 
         __synapse_networking_io_request* pIoReq, 
         uint32_t                         pIoFlag)
{
    synapse_networking_opaque_init
        (synapse_networking_io_request, hnd_ioreq,
            pIoReq);
    
    pIoReq->ptr_ioreq_completion_routine
        (hnd_ioreq);
}

void
    __synapse_networking_tcp_aio_receive_from
        (__synapse_networking_tcp*        pTcp,
         __synapse_networking_io_request* pIoRequest)
{
    WSARecv
        (pTcp->hnd_tcp_socket,
            &pIoRequest->hnd_ioreq_buffer,
                1, &pIoRequest->size_ioreq_completion,
                    0, &pIoRequest->hnd_ioreq_native,
                        &__synapse_networking_tcp_aio_completion_routine);
}

void
    __synapse_networking_tcp_aio_send_to
        (__synapse_networking_tcp*        pTcp,
         __synapse_networking_io_request* pIoRequest)
{
    WSASend
        (pTcp->hnd_tcp_socket,
            &pIoRequest->hnd_ioreq_buffer,
                1, &pIoRequest->size_ioreq_completion,
                    0, &pIoRequest->hnd_ioreq_native,
                        &__synapse_networking_tcp_aio_completion_routine);
}