#include <networking/tcp/tcp_init.h>
#include <networking/tcp/details/tcp_init.h>

synapse_networking_tcp
    synapse_networking_tcp_initialize_v4
        ()
{
    synapse_networking_opaque_init
        (synapse_networking_tcp, hnd_tcp,
            __synapse_networking_tcp_initialize_v4());
    
    return
        hnd_tcp;
}

synapse_networking_tcp_acceptor
    synapse_networking_tcp_acceptor_initialize_v4
        ()
{
    synapse_networking_opaque_init
        (synapse_networking_tcp_acceptor, hnd_tcp_acceptor,
            __synapse_networking_tcp_initialize_v4());

    return
        hnd_tcp_acceptor;
}

void
    synapse_networking_tcp_cleanup
        (synapse_networking_tcp pTcp)
{
    __synapse_networking_tcp_cleanup
        (synapse_networking_opaque_reference
            (pTcp));
}