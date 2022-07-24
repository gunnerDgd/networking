#pragma once
#include <networking/defines/export/export.h>

#include <networking/export/interface/tcp/tcp.h>
#include <networking/export/interface/address/v4.h>

#include <stdbool.h>

synapse_networking_dll
    synapse_tcp
        synapse_initialize_tcp_v4
            ();

synapse_networking_dll
    synapse_tcp_acceptor
        synapse_initialize_tcp_acceptor_v4
            ();

synapse_networking_dll
    bool
        synapse_tcp_bind_from_v4_address
            (synapse_tcp_acceptor, synapse_address_v4);

synapse_networking_dll
    bool
        synapse_tcp_listen
            (synapse_tcp_acceptor, uint32_t);

synapse_networking_dll
    void
        synapse_cleanup_tcp
            (synapse_tcp);