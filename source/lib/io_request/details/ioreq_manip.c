#include <networking/io_request/details/ioreq_manip.h>

void
    __synapse_networking_io_request_wait
        (__synapse_networking_io_request* pIoRequest)
{
    WaitForSingleObject
        (pIoRequest->hnd_ioreq_native.hEvent,
            INFINITE);
}

bool
    __synapse_networking_io_request_wait_until
        (__synapse_networking_io_request* pIoRequest, 
         uint32_t                         pIoWaitTime)
{
    return
        (WaitForSingleObject
            (pIoRequest->hnd_ioreq_native.hEvent,
                pIoWaitTime) == WAIT_OBJECT_0)
                    ? true : false;
}