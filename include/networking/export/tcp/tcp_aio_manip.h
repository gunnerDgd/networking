#pragma once
#include <networking/defines/export/export.h>

#include <networking/export/interface/tcp/tcp.h>
#include <networking/export/interface/io_request.h>

synapse_networking_dll
    void
        synapse_tcp_aio_receive_from
            (synapse_tcp_aio, synapse_networking_io_request);

synapse_networking_dll
    void
        synapse_tcp_aio_send_to
            (synapse_tcp_aio, synapse_networking_io_request);