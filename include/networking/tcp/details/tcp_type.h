#pragma once

#include <stdint.h>
#include <stddef.h>

#include <networking/interface/address/v4.h>

typedef struct
    __synapse_networking_tcp
{
    uint64_t
        hnd_tcp_socket;
    union
    {
        synapse_networking_address_v4
            hnd_tcp_v4_address;
    };
} __synapse_networking_tcp;