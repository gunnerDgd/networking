#include <networking/address/v4/address_v4.h>
#include <networking/address/v4/details/networking_address_v4.h>

synapse_networking_address_v4
synapse_networking_address_v4_initialize
	(const char* pAddrStr, uint16_t pAddrPort)
{
	synapse_networking_opaque_init
		(synapse_networking_address_v4, ptr_addr,
			__synapse_networking_address_v4_initialize(pAddrStr, pAddrPort));

	return ptr_addr;
}

void
synapse_networking_address_v4_cleanup
	(synapse_networking_address_v4 pV4Addr)
{
	__synapse_networking_address_v4_cleanup
		(synapse_networking_opaque_reference(pV4Addr));
}

void
synapse_networking_address_v4_assign
	(synapse_networking_address_v4 pV4Addr, const char* pV4AddrStr, uint16_t pV4AddrPort)
{
	__synapse_networking_address_v4_assign
		(synapse_networking_opaque_reference(pV4Addr), pV4AddrStr, pV4AddrPort);
}

void
synapse_networking_address_v4_retrieve
	(synapse_networking_address_v4 pV4Addr, char* pV4AddrStr, uint16_t* pV4AddrPort)
{
	__synapse_networking_address_v4_retrieve
		(synapse_networking_opaque_reference(pV4Addr), pV4AddrStr, pV4AddrPort);
}