#include <networking/address/v4/address_v4.h>
#include <networking/address/v4/details/networking_address_v4.h>

synapse_networking_address_v4
	synapse_networking_address_v4_initialize
		(const char* pAddrStr, uint16_t pAddrPort)
{
	synapse_networking_opaque_init
		(synapse_networking_address_v4, hnd_v4_addr,
			__synapse_networking_address_v4_initialize
				(pAddrStr, pAddrPort));

	return 
		hnd_v4_addr;
}

void
synapse_networking_address_v4_cleanup
	(synapse_networking_address_v4 pV4Addr)
{
	__synapse_networking_address_v4_cleanup
		(synapse_networking_opaque_reference
			(pV4Addr));
}

uint32_t
	synapse_networking_address_v4_retrieve_address
		(synapse_networking_address_v4 pV4Addr)
{
	return
		synapse_networking_opaque_cast
			(pV4Addr, __synapse_networking_address_v4*)
				->proto_addr_v4_int;
}

uint16_t
	synapse_networking_address_v4_retrieve_port
		(synapse_networking_address_v4 pV4Addr)
{
	return
		synapse_networking_opaque_cast
			(pV4Addr, __synapse_networking_address_v4*)
				->proto_port;
}