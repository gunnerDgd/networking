#include <networking/tcp/tcp_connect.h>
#include <networking/tcp/details/tcp_connect.h>

bool
    synapse_networking_tcp_connect_from_v4_address
        (synapse_networking_tcp        pTcp,
         synapse_networking_address_v4 pV4Address)
{
    return
        __synapse_networking_tcp_connect_from_v4_address
            (synapse_networking_opaque_reference
                (pTcp),
             synapse_networking_opaque_reference
                (pV4Address));
}

synapse_networking_tcp
    synapse_networking_tcp_connect_from_v4_acceptor
        (synapse_networking_tcp_acceptor pTcpAcceptor)
{
    synapse_networking_opaque_init
        (synapse_networking_tcp, hnd_tcp,
            __synapse_networking_tcp_connect_from_v4_acceptor
                (synapse_networking_opaque_reference
                    (pTcpAcceptor)));
    
    return
        hnd_tcp;
}

bool
    synapse_networking_tcp_bind_from_v4_address
        (synapse_networking_tcp_acceptor pTcpAcceptor,
         synapse_networking_address_v4   pV4Address)
{
    return
        __synapse_networking_tcp_bind_from_v4_address
            (synapse_networking_opaque_reference
                (pTcpAcceptor),
             synapse_networking_opaque_reference
                (pV4Address));
}

bool
    synapse_networking_tcp_listen
        (synapse_networking_tcp_acceptor pTcpAcceptor, 
         uint32_t                        pBacklogCount)
{
    return
        __synapse_networking_tcp_listen
            (synapse_networking_opaque_reference
                (pTcpAcceptor), pBacklogCount);
}