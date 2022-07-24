#pragma once

#include <networking/interface/tcp/tcp.h>
#include <networking/interface/address/v4.h>

#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>

bool
    synapse_networking_tcp_aio_connect_from_v4_address
        (synapse_networking_tcp_aio,
            synapse_networking_address_v4);

synapse_networking_tcp_aio
    synapse_networking_tcp_aio_connect_from_v4_acceptor
        (synapse_networking_tcp_aio_acceptor);

bool
    synapse_networking_tcp_aio_bind_from_v4_address
        (synapse_networking_tcp_aio_acceptor,
            synapse_networking_address_v4);

bool
    synapse_networking_tcp_aio_listen
        (synapse_networking_tcp_aio_acceptor, uint32_t);