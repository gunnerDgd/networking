#include <networking/address/v4/details/networking_address_v4.h>
#include <synapse/memory/memory.h>

#include <string.h>
#include <stdio.h>

#include <WinSock2.h>

__synapse_networking_address_v4*
	__synapse_networking_address_v4_initialize
		(const char* pV4Address, uint16_t pV4Port)
{
	__synapse_networking_address_v4* ptr_addr
		= synapse_system_allocate
			(sizeof(__synapse_networking_address_v4));

	sscanf
		(pV4Address, "%u.%u.%u.%u",
				&ptr_addr->proto_addr_v4[0],
					&ptr_addr->proto_addr_v4[1],
						&ptr_addr->proto_addr_v4[2],
							&ptr_addr->proto_addr_v4[3]);
	
	ptr_addr->proto_addr_v4_int
		= htonl(ptr_addr->proto_addr_v4_int);
	ptr_addr->proto_port
		= htons(pV4Port);
	ptr_addr->proto_addr_v4_int
		= htonl(ptr_addr->proto_addr_v4_int);

	return
		ptr_addr;
}

void
	__synapse_networking_address_v4_cleanup
		(__synapse_networking_address_v4* pV4Address)
{
	synapse_system_deallocate
		(pV4Address);
}