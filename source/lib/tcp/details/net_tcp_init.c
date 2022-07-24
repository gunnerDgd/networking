#include <networking/tcp/details/tcp_init.h>
#include <synapse/memory/memory.h>

#include <WinSock2.h>

__synapse_networking_tcp*
    __synapse_networking_tcp_initialize_v4
        ()
{
    __synapse_networking_tcp*
        ptr_tcp_handle
            = synapse_system_allocate
                (sizeof(__synapse_networking_tcp));
    
    ptr_tcp_handle->hnd_tcp_socket
        = socket
            (AF_INET, SOCK_STREAM, IPPROTO_TCP);

    return
        ptr_tcp_handle;
}

void
    __synapse_networking_tcp_cleanup
        (__synapse_networking_tcp* pTcp)
{
    closesocket
        (pTcp->hnd_tcp_socket);
    synapse_system_deallocate
        (pTcp);
}