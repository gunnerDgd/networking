#pragma once

#include <networking/defines/export/export.h>
#include <networking/export/interface/io_request.h>

#include <stddef.h>
#include <stdint.h>

synapse_networking_dll
    synapse_networking_io_request
        synapse_initialize_networking_io_request
            (void*, size_t, void(*)(synapse_networking_io_request));

synapse_networking_dll
    synapse_networking_io_request
        synapse_initialize_networking_io_request_from_existing
            (synapse_networking_io_request, void*, size_t,
                void(*)(synapse_networking_io_request));

synapse_networking_dll
    void
        synapse_cleanup_networking_io_request
            (synapse_networking_io_request);