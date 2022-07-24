#include <WinSock2.h>
#include <networking/interface/io_request.h>

typedef struct
    __synapse_networking_io_request
{
    OVERLAPPED
        hnd_ioreq_native;
    WSABUF
        hnd_ioreq_buffer;
    size_t
        size_ioreq_completion;
    void
        (*ptr_ioreq_completion_routine)
            (synapse_networking_io_request);
} __synapse_networking_io_request;