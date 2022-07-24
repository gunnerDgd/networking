#include <networking/export/tcp/tcp_aio_init.h>
#include <networking/tcp/aio/aio_tcp_init.h>
#include <networking/tcp/aio/aio_tcp_connect.h>

synapse_networking_dll
    synapse_tcp_aio
        synapse_tcp_aio_initialize_v4
            ()
{
    return
        synapse_networking_tcp_aio_initialize_v4
            ();
}

synapse_networking_dll
    synapse_tcp_aio_acceptor
        synapse_tcp_aio_acceptor_initialize_v4
            ()
{
    return
        synapse_networking_tcp_aio_acceptor_initialize_v4
            ();
}

synapse_networking_dll
    bool
        synapse_tcp_aio_connect_from_v4
            (synapse_tcp_aio pAioTcp, synapse_address_v4 pV4Address)
{
    return
        synapse_networking_tcp_aio_connect_from_v4_address
            (pAioTcp, pV4Address);
}

synapse_networking_dll
    synapse_tcp_aio
        synapse_tcp_aio_connect_from_acceptor_v4
            (synapse_tcp_aio_acceptor pAioAcceptor)
{
    return
        synapse_networking_tcp_aio_connect_from_v4_acceptor
            (pAioAcceptor);
}

synapse_networking_dll
    bool
        synapse_tcp_aio_bind_from_v4_address
            (synapse_tcp_aio_acceptor pAioAcceptor, synapse_address_v4 pV4Address)
{
    return
        synapse_networking_tcp_aio_bind_from_v4_address
            (pAioAcceptor, pV4Address);
}

synapse_networking_dll
    bool
        synapse_tcp_aio_listen
            (synapse_tcp_aio_acceptor pAioAcceptor, uint32_t pBacklogCount)
{
    return
        synapse_networking_tcp_aio_listen
            (pAioAcceptor, pBacklogCount);
}