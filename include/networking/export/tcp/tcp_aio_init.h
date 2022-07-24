#pragma once
#include <networking/defines/export/export.h>

#include <networking/export/interface/tcp/tcp.h>
#include <networking/export/interface/io_request.h>
#include <networking/export/interface/address/v4.h>

#include <stdbool.h>

synapse_networking_dll
    synapse_tcp_aio
        synapse_tcp_aio_initialize_v4
            ();

synapse_networking_dll
    synapse_tcp_aio_acceptor
        synapse_tcp_aio_acceptor_initialize_v4
            ();

synapse_networking_dll
    bool
        synapse_tcp_aio_connect_from_v4
            (synapse_tcp_aio, synapse_address_v4);

synapse_networking_dll
    synapse_tcp_aio
        synapse_tcp_aio_connect_from_acceptor_v4
            (synapse_tcp_aio_acceptor);

synapse_networking_dll
    bool
        synapse_tcp_aio_bind_from_v4_address
            (synapse_tcp_aio_acceptor, synapse_address_v4);

synapse_networking_dll
    bool
        synapse_tcp_aio_listen
            (synapse_tcp_aio_acceptor, uint32_t);