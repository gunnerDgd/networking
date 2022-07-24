#include <networking/io_request/io_request_init.h>
#include <networking/io_request/details/ioreq_init.h>

synapse_networking_io_request
    synapse_networking_io_request_initialize
        (void* pIoMemory, size_t pIoSize,
            void(*pCompletionRoutine)(synapse_networking_io_request))
{
    synapse_networking_opaque_init
        (synapse_networking_io_request, hnd_ioreq,
            __synapse_networking_io_request_initialize
                (pIoMemory, pIoSize));
    
    return
        hnd_ioreq;
}

synapse_networking_io_request
    synapse_networking_io_request_initialize_from_existing
        (synapse_networking_io_request pIoReq, 
         void*                         pIoMemory, 
         size_t                        pIoSize)
{
    __synapse_networking_io_request_initialize_from_existing
        (synapse_networking_opaque_reference
            (pIoReq), pIoMemory, pIoSize);

    return
        pIoReq;
}

void
    synapse_networking_io_request_cleanup
        (synapse_networking_io_request pIoReq)
{
    __synapse_networking_io_request_cleanup
        (synapse_networking_opaque_reference
            (pIoReq));
}