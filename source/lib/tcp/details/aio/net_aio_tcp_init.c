#include <networking/tcp/details/aio/aio_tcp_init.h>
#include <synapse/memory/memory.h>

#include <WinSock2.h>

__synapse_networking_tcp*
    __synapse_networking_tcp_aio_initialize_v4
        ()
{
    __synapse_networking_tcp*
        ptr_aio_tcp
            = synapse_system_allocate
                    (sizeof(__synapse_networking_tcp));

    ptr_aio_tcp->hnd_tcp_socket
        = WSASocket
            (AF_INET, SOCK_STREAM, IPPROTO_TCP,
                NULL, NULL, WSA_FLAG_OVERLAPPED);
    
    return
        ptr_aio_tcp;
}