#include <networking/tcp/details/tcp_connect.h>
#include <synapse/memory/memory.h>

#include <WinSock2.h>

bool
    __synapse_networking_tcp_connect_from_v4_address
        (__synapse_networking_tcp*       pTcp, 
         __synapse_networking_address_v4 pV4Address)
{
    SOCKADDR_IN
        hnd_native_address
            = {
                    .sin_addr.S_un.S_addr
                        = pV4Address.proto_addr_v4_int,
                    .sin_port
                        = pV4Address.proto_port,
                    .sin_family
                        = AF_INET
              };

    return
        (connect
            (pTcp->hnd_tcp_socket,
                &hnd_native_address, sizeof(SOCKADDR_IN)) == 0)
                    ? true : false;
}

__synapse_networking_tcp*
    __synapse_networking_tcp_connect_from_v4_acceptor
        (__synapse_networking_tcp* pTcp)
{
    SOCKADDR_IN
        hnd_native_address;
    int
        hnd_native_address_size
            = sizeof(SOCKADDR_IN);

    __synapse_networking_tcp*
        ptr_tcp;
    SOCKET
        hnd_native_tcp
            = accept
                (pTcp->hnd_tcp_socket,
                    &hnd_native_address, &hnd_native_address_size);
    
    if(hnd_native_tcp
            == INVALID_SOCKET)
                return NULL;
    
    ptr_tcp
        = synapse_system_allocate
                (sizeof(__synapse_networking_tcp));
    ptr_tcp->hnd_tcp_socket
        = hnd_native_tcp;
    ptr_tcp->hnd_tcp_v4_address
        = synapse_networking_address_v4_initialize
                (&hnd_native_address.sin_addr.S_un,
                    hnd_native_address.sin_port);
    
    return
        ptr_tcp;
}

bool
    __synapse_networking_tcp_bind_from_v4_address
        (__synapse_networking_tcp*        pTcp,
         __synapse_networking_address_v4* pV4Address)
{
    SOCKADDR_IN
        hnd_native_address
            = {
                    .sin_addr.S_un.S_addr
                        = pV4Address->proto_addr_v4_int,
                    .sin_port
                        = pV4Address->proto_port,
                    .sin_family
                        = AF_INET
              };

    pTcp->hnd_tcp_v4_address
        = synapse_networking_address_v4_initialize
            (&hnd_native_address.sin_addr.S_un,
                hnd_native_address.sin_port);
    return
        (bind(pTcp->hnd_tcp_socket,
                &hnd_native_address, sizeof(SOCKADDR_IN)) == 0)
                    ? true : false;
}

bool
    __synapse_networking_tcp_listen
        (__synapse_networking_tcp* pTcp,
            uint32_t               pTcpBacklogSize)
{
    return
        (listen
            (pTcp->hnd_tcp_socket, pTcpBacklogSize) == 0)
                ? true : false;
}