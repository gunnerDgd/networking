#pragma once
#include <networking/io_request/details/ioreq_type.h>

__synapse_networking_io_request*
    __synapse_networking_io_request_initialize
        (void*, size_t);

__synapse_networking_io_request*
    __synapse_networking_io_request_initialize_from_existing
        (__synapse_networking_io_request*, void*, size_t);

void
    __synapse_networking_io_request_cleanup
        (__synapse_networking_io_request*);