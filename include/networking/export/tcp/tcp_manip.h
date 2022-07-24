#pragma once
#include <networking/defines/export/export.h>
#include <networking/export/interface/tcp/tcp.h>

#include <stdint.h>
#include <stddef.h>

synapse_networking_dll
    size_t
        synapse_tcp_receive_from
            (synapse_tcp, void*, size_t);

synapse_networking_dll
    size_t
        synapse_tcp_send_to
            (synapse_tcp, void*, size_t);