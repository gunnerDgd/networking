#include <networking/export/tcp/tcp_init.h>

#include <networking/tcp/tcp_init.h>
#include <networking/tcp/tcp_connect.h>

synapse_networking_dll
    synapse_tcp
        synapse_initialize_tcp_v4
            ()
{
    return
        synapse_networking_tcp_initialize_v4
            ();
}

synapse_networking_dll
    synapse_tcp_acceptor
        synapse_initialize_tcp_acceptor_v4
            ()
{
    return
        synapse_networking_tcp_acceptor_initialize_v4
            ();
}

synapse_networking_dll
    bool
        synapse_tcp_bind_from_v4_address
            (synapse_tcp_acceptor pAcceptor, synapse_address_v4 pV4Address)
{
    return
        synapse_networking_tcp_bind_from_v4_address
            (pAcceptor, pV4Address);
}

synapse_networking_dll
    bool
        synapse_tcp_listen
            (synapse_tcp_acceptor pAcceptor, uint32_t pBacklogCount)
{
    return
        synapse_networking_tcp_listen
            (pAcceptor, pBacklogCount);
}

synapse_networking_dll
    void
        synapse_cleanup_tcp
            (synapse_tcp pTcp)
{
    synapse_networking_tcp_cleanup
        (pTcp);
}