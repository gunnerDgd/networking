#pragma once
#include <networking/interface/tcp/tcp.h>

synapse_networking_tcp_aio
    synapse_networking_tcp_aio_initialize_v4
        ();

synapse_networking_tcp_aio_acceptor
    synapse_networking_tcp_aio_acceptor_initialize_v4
        ();

void
    synapse_networking_tcp_aio_cleanup
        (synapse_networking_tcp_aio);