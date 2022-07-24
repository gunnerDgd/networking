#pragma once
#include <networking/interface/io_request.h>

#include <stdint.h>
#include <stddef.h>

synapse_networking_io_request
    synapse_networking_io_request_initialize
        (void*, size_t, void(*)(synapse_networking_io_request));

synapse_networking_io_request
    synapse_networking_io_request_initialize_from_existing
        (synapse_networking_io_request, 
            void*, size_t, void(*)(synapse_networking_io_request));

void
    synapse_networking_io_request_cleanup
        (synapse_networking_io_request);