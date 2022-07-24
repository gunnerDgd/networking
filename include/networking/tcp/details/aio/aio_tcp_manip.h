#pragma once

#include <networking/tcp/details/tcp_type.h>
#include <networking/io_request/details/ioreq_type.h>

#include <stdint.h>
#include <stddef.h>

void
    __synapse_networking_tcp_aio_completion_routine
        (uint32_t, uint32_t, __synapse_networking_io_request*, uint32_t);

void
    __synapse_networking_tcp_aio_receive_from
        (__synapse_networking_tcp*,
            __synapse_networking_io_request*);

void
    __synapse_networking_tcp_aio_send_to
        (__synapse_networking_tcp*,
            __synapse_networking_io_request*);