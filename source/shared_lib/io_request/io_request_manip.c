#include <networking/export/io_request/io_request_manip.h>
#include <networking/io_request/io_request_manip.h>

synapse_networking_dll
    void
        synapse_wait_networking_io_request
            (synapse_networking_io_request pIoRequest)
{
    synapse_networking_io_request_wait
        (pIoRequest);
}

synapse_networking_dll
    bool
        synapse_wait_until_networking_io_request
            (synapse_networking_io_request pIoRequest, uint32_t pWaitTime)
{
    return
        synapse_networking_io_request_wait_until
            (pIoRequest, pWaitTime);
}