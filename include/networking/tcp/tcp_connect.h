#pragma once

#include <networking/interface/tcp/tcp.h>
#include <networking/interface/address/v4.h>

#include <stdbool.h>

bool
    synapse_networking_tcp_connect_from_v4_address
        (synapse_networking_tcp, synapse_networking_address_v4);

synapse_networking_tcp
    synapse_networking_tcp_connect_from_v4_acceptor
        (synapse_networking_tcp_acceptor);

bool
    synapse_networking_tcp_bind_from_v4_address
        (synapse_networking_tcp_acceptor,
            synapse_networking_address_v4);

bool
    synapse_networking_tcp_listen
        (synapse_networking_tcp_acceptor, uint32_t);