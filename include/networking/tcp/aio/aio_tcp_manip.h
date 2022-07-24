#pragma once

#include <networking/interface/io_request.h>
#include <networking/interface/tcp/tcp.h>

void
    synapse_networking_tcp_aio_receive_from
        (synapse_networking_tcp_aio,
            synapse_networking_io_request);

void
    synapse_networking_tcp_aio_send_to
        (synapse_networking_tcp_aio,
            synapse_networking_io_request);