#pragma once
#include <networking/interface/io_request.h>

#include <stddef.h>
#include <stdint.h>

#include <stdbool.h>

void
    synapse_networking_io_request_wait
        (synapse_networking_io_request);

bool
    synapse_networking_io_request_wait_until
        (synapse_networking_io_request, uint32_t);