#include <networking/tcp/aio/aio_tcp_init.h>

#include <networking/tcp/details/tcp_init.h>
#include <networking/tcp/details/aio/aio_tcp_init.h>

synapse_networking_tcp_aio
    synapse_networking_tcp_aio_initialize_v4
        ()
{
    synapse_networking_opaque_init
        (synapse_networking_tcp_aio, hnd_tcp_aio,
            __synapse_networking_tcp_aio_initialize_v4());
    
    return
        hnd_tcp_aio;
}

synapse_networking_tcp_aio_acceptor
    synapse_networking_tcp_aio_acceptor_initialize_v4
        ()
{
    synapse_networking_opaque_init
        (synapse_networking_tcp_aio_acceptor, hnd_tcp_aio,
            __synapse_networking_tcp_aio_initialize_v4());
    
    return
        hnd_tcp_aio;
}

void
    synapse_networking_tcp_aio_cleanup
        (synapse_networking_tcp_aio pAioTcp)
{
    __synapse_networking_tcp_cleanup
        (synapse_networking_opaque_reference
            (pAioTcp));
}