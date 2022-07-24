#pragma once
#include <stdint.h>
#include <stddef.h>

typedef struct 
	__synapse_networking_address_v4
{
	union
	{
		uint8_t 
			proto_addr_v4[4];
		uint32_t
			proto_addr_v4_int;
	};
	uint16_t
		proto_port;
} __synapse_networking_address_v4;

#define __synapse_networking_address_v4_size 4
#define __synapse_networking_address_v4_port_size sizeof(uint16_t)