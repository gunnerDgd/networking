#pragma once

#include <networking/tcp/details/tcp_type.h>

#include <stdint.h>
#include <stddef.h>

size_t 
    __synapse_networking_tcp_send_to
        (__synapse_networking_tcp*, void*, size_t);

size_t
    __synapse_networking_tcp_receive_from
        (__synapse_networking_tcp*, void*, size_t);