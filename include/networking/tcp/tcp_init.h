#pragma once
#include <networking/interface/tcp/tcp.h>

synapse_networking_tcp
    synapse_networking_tcp_initialize_v4
        ();

synapse_networking_tcp_acceptor
    synapse_networking_tcp_acceptor_initialize_v4
        ();

void
    synapse_networking_tcp_cleanup
        (synapse_networking_tcp);