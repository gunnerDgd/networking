#include <networking/address/v4/details/networking_address_v4.h>

__synapse_networking_address_v4*
__synapse_networking_address_v4_initialize
	(const char* pV4Address, uint16_t pV4Port)
{
	__synapse_networking_address_v4* ptr_addr
		= malloc(sizeof(__synapse_networking_address_v4));

	ptr_addr->hnd_v4_addr.sin_addr.S_un.S_addr
		= inet_addr(pV4Address);
	ptr_addr->hnd_v4_addr.sin_port
		= htons(pV4Port);
	ptr_addr->hnd_v4_addr.sin_family
		= AF_INET;

	return
		ptr_addr;
}

void
__synapse_networking_address_v4_cleanup
	(__synapse_networking_address_v4* pV4Address)
{
	free(pV4Address);
}

void
__synapse_networking_address_v4_assign
	(__synapse_networking_address_v4* pV4Address, const char* pV4AddrStr, uint16_t pV4Port)
{
	pV4Address->hnd_v4_addr.sin_addr.S_un.S_addr
		= inet_addr(pV4AddrStr);
	pV4Address->hnd_v4_addr.sin_port
		= htons(pV4Port);
}

void
__synapse_networking_address_v4_retrieve
	(__synapse_networking_address_v4* pV4Address, char* pV4AddrStr, uint16_t* pV4Port)
{
	char* ptr_addr_str
		= inet_ntoa(pV4Address->hnd_v4_addr.sin_addr);
	strcpy
		(pV4AddrStr, ptr_addr_str);
	pV4Port
		= ntohs(pV4Port);
}