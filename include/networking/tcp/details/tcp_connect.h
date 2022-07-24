#pragma once

#include <networking/tcp/details/tcp_type.h>

#include <networking/address/v4/details/networking_address_v4_type.h>
#include <networking/address/v4/address_v4.h>

#include <stdbool.h>

bool
    __synapse_networking_tcp_connect_from_v4_address
        (__synapse_networking_tcp*, __synapse_networking_address_v4*);

__synapse_networking_tcp*
    __synapse_networking_tcp_connect_from_v4_acceptor
        (__synapse_networking_tcp*);

bool
    __synapse_networking_tcp_bind_from_v4_address
        (__synapse_networking_tcp*,
            __synapse_networking_address_v4*);

bool
    __synapse_networking_tcp_listen
        (__synapse_networking_tcp*, uint32_t);