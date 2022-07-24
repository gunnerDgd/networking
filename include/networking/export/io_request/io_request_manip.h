#pragma once
#include <networking/defines/export/export.h>
#include <networking/export/interface/io_request.h>

#include <stddef.h>
#include <stdint.h>

#include <stdbool.h>

synapse_networking_dll
    void
        synapse_wait_networking_io_request
            (synapse_networking_io_request);

synapse_networking_dll
    bool
        synapse_wait_until_networking_io_request
            (synapse_networking_io_request, uint32_t);