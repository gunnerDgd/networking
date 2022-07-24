#include <networking/io_request/details/ioreq_init.h>
#include <networking/interface/io_request.h>

#include <synapse/memory/memory.h>

__synapse_networking_io_request*
    __synapse_networking_io_request_initialize
        (void* pIoMemory, size_t pIoSize,
            void(*pCompletionRoutine)(synapse_networking_io_request))
{
    __synapse_networking_io_request*
        ptr_ioreq
            = synapse_system_allocate
                    (sizeof(__synapse_networking_io_request));
    
    ptr_ioreq->hnd_ioreq_native.hEvent
        = CreateEvent
                (NULL, FALSE, FALSE, NULL);
    ptr_ioreq->hnd_ioreq_buffer.buf
        = pIoMemory;
    ptr_ioreq->hnd_ioreq_buffer.len
        = pIoSize;
    ptr_ioreq->ptr_ioreq_completion_routine
        = pCompletionRoutine;

    return ptr_ioreq;
}

__synapse_networking_io_request*
    __synapse_networking_io_request_initialize_from_existing
        (__synapse_networking_io_request* pIoRequest, 
         void*                            pIoMemory, 
         size_t                           pIoSize,
         void(*pCompletionRoutine)(synapse_networking_io_request))
{
    pIoRequest->hnd_ioreq_buffer.buf
        = pIoMemory;
    pIoRequest->hnd_ioreq_buffer.len
        = pIoSize;
    pIoRequest->ptr_ioreq_completion_routine
        = pCompletionRoutine;
    
    return pIoRequest;
}

void
    __synapse_networking_io_request_cleanup
        (__synapse_networking_io_request* pIoRequest)
{
    CloseHandle
        (pIoRequest->hnd_ioreq_native.hEvent);
    synapse_system_deallocate
        (pIoRequest);
}