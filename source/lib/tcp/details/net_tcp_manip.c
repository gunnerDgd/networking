#include <networking/tcp/details/tcp_manip.h>
#include <WinSock2.h>

size_t 
    __synapse_networking_tcp_send_to
        (__synapse_networking_tcp* pTcp, 
         void*                     pIoMemory, 
         size_t                    pIoSize)
{
    return
        send
            (pTcp->hnd_tcp_socket, pIoMemory, pIoSize, 0);
}

size_t
    __synapse_networking_tcp_receive_from
        (__synapse_networking_tcp* pTcp, 
         void*                     pIoMemory, 
         size_t                    pIoSize)
{
    return
        recv
            (pTcp->hnd_tcp_socket, pIoMemory, pIoSize, 0);
}