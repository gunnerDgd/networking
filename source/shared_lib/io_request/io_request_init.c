#include <networking/export/io_request/io_request_init.h>
#include <networking/io_request/io_request_init.h>

synapse_networking_dll
    synapse_networking_io_request
        synapse_initialize_networking_io_request
            (void*  pIoMemory, 
             size_t pIoSize, 
             void (*pIoCompletionRoutine)(synapse_networking_io_request))
{
    return
        synapse_networking_io_request_initialize
            (pIoMemory, pIoSize, pIoCompletionRoutine);
}

synapse_networking_dll
    synapse_networking_io_request
        synapse_initialize_networking_io_request_from_existing
            (synapse_networking_io_request pIoRequest, 
             void*                         pIoMemory, 
             size_t                        pIoSize,
             void(*pIoCompletionRoutine)(synapse_networking_io_request))
{
    return
        synapse_networking_io_request_initialize_from_existing
            (pIoRequest, pIoMemory, pIoSize, pIoCompletionRoutine);
}

synapse_networking_dll
    void
        synapse_cleanup_networking_io_request
            (synapse_networking_io_request pIoRequest)
{
    synapse_networking_io_request_cleanup
        (pIoRequest);
}