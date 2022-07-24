#include <networking/tcp/tcp_manip.h>
#include <networking/tcp/details/tcp_manip.h>

size_t
    synapse_networking_tcp_receive_from
        (synapse_networking_tcp pTcp, 
         void*                  pIoMemory, 
         size_t                 pIoSize)
{
    return
        __synapse_networking_tcp_receive_from
            (synapse_networking_opaque_reference
                (pTcp), pIoMemory, pIoSize);
}

size_t
    synapse_networking_tcp_send_to
        (synapse_networking_tcp pTcp, 
         void*                  pIoMemory, 
         size_t                 pIoSize)
{
    return
        __synapse_networking_tcp_send_to
            (synapse_networking_opaque_reference
                (pTcp), pIoMemory, pIoSize);
}