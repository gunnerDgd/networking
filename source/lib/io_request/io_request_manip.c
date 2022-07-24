#include <networking/io_request/io_request_manip.h>
#include <networking/io_request/details/ioreq_manip.h>

void
    synapse_networking_io_request_wait
        (synapse_networking_io_request pIoRequest)
{
    __synapse_networking_io_request_wait
        (synapse_networking_opaque_reference
            (pIoRequest));
}

bool
    synapse_networking_io_request_wait_until
        (synapse_networking_io_request pIoRequest, uint32_t pWaitTime)
{
    return
        __synapse_networking_io_request_wait_until
            (synapse_networking_opaque_reference
                (pIoRequest), pWaitTime);
}