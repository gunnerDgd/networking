#include <networking/export/address/v4.h>
#include <networking/address/v4/address_v4.h>

synapse_networking_dll
    synapse_address_v4
        synapse_initialize_v4_address
            (const char* pV4AddrString, uint16_t pV4AddrPort)
{
    return
        synapse_networking_address_v4_initialize
            (pV4AddrString, pV4AddrPort);
}

synapse_networking_dll
    void
        synapse_cleanup_v4_address
            (synapse_address_v4 pV4Address)
{
    synapse_networking_address_v4_cleanup
        (pV4Address);
}

synapse_networking_dll
    uint32_t
        synapse_retrieve_adress_from_v4
            (synapse_address_v4 pV4Address)
{
    return
        synapse_networking_address_v4_retrieve_address
            (pV4Address);
}

synapse_networking_dll
    uint16_t
        synapse_retrieve_port_from_v4
            (synapse_address_v4 pV4Address)
{
    return
        synapse_networking_address_v4_retrieve_port
            (pV4Address);
}