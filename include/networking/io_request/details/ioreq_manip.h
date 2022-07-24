#pragma once

#include <networking/io_request/details/ioreq_type.h>
#include <stdbool.h>

#include <stdint.h>
#include <stddef.h>

void
    __synapse_networking_io_request_wait
        (__synapse_networking_io_request*);

bool
    __synapse_networking_io_request_wait_until
        (__synapse_networking_io_request*, uint32_t);