#include <networking/export/tcp/tcp_manip.h>
#include <networking/tcp/tcp_manip.h>

synapse_networking_dll
    size_t
        synapse_tcp_receive_from
            (synapse_tcp pTcp, void* pIoMemory, size_t pIoSize)
{
    return
        synapse_networking_tcp_receive_from
            (pTcp, pIoMemory, pIoSize);
}

synapse_networking_dll
    size_t
        synapse_tcp_send_to
            (synapse_tcp pTcp, void* pIoMemory, size_t pIoSize)
{
    return
        synapse_networking_tcp_send_to
            (pTcp, pIoMemory, pIoSize);
}