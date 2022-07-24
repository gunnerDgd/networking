#pragma once
#include <networking/interface/tcp/tcp.h>

#include <stdint.h>
#include <stddef.h>

size_t
    synapse_networking_tcp_receive_from
        (synapse_networking_tcp, void*, size_t);

size_t
    synapse_networking_tcp_send_to
        (synapse_networking_tcp, void*, size_t);