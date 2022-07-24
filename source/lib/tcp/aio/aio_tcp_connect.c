#include <networking/tcp/aio/aio_tcp_connect.h>
#include <networking/tcp/details/tcp_connect.h>

bool
    synapse_networking_tcp_aio_connect_from_v4_address
        (synapse_networking_tcp_aio    pTcpAio,
         synapse_networking_address_v4 pV4Address)
{
    return
        __synapse_networking_tcp_connect_from_v4_address
             (synapse_networking_opaque_reference
                (pTcpAio),
              synapse_networking_opaque_reference
                (pV4Address));

}

synapse_networking_tcp_aio
    synapse_networking_tcp_aio_connect_from_v4_acceptor
        (synapse_networking_tcp_aio_acceptor pAioAcceptor)
{
    synapse_networking_opaque_init
        (synapse_networking_tcp_aio, hnd_tcp_aio,
            __synapse_networking_tcp_connect_from_v4_acceptor
                (synapse_networking_opaque_reference
                    (pAioAcceptor)));
    
    return
        hnd_tcp_aio;
}

bool
    synapse_networking_tcp_aio_bind_from_v4_address
        (synapse_networking_tcp_aio_acceptor pAioAcceptor,
         synapse_networking_address_v4       pV4Address)
{
    return
        __synapse_networking_tcp_bind_from_v4_address
            (synapse_networking_opaque_reference
                (pAioAcceptor),
             synapse_networking_opaque_reference
                (pV4Address));
}

bool
    synapse_networking_tcp_aio_listen
        (synapse_networking_tcp_aio_acceptor pAioAcceptor, 
         uint32_t                            pAioBacklog)
{
    return
        __synapse_networking_tcp_listen
            (synapse_networking_opaque_reference
                (pAioAcceptor), pAioBacklog);
}