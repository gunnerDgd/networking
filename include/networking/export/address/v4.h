#pragma once
#include <networking/defines/export/export.h>
#include <networking/export/interface/address/v4.h>

#include <stdint.h>
#include <stddef.h>

synapse_networking_dll
    synapse_address_v4
        synapse_initialize_v4_address
            (const char*, uint16_t);

synapse_networking_dll
    void
        synapse_cleanup_v4_address
            (synapse_address_v4);

synapse_networking_dll
    uint32_t
        synapse_retrieve_adress_from_v4
            (synapse_address_v4);

synapse_networking_dll
    uint16_t
        synapse_retrieve_port_from_v4
            (synapse_address_v4);