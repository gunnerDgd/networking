#pragma once
#include <networking/address/v4/details/networking_address_v4_type.h>

__synapse_networking_address_v4*
	__synapse_networking_address_v4_initialize
		(const char*, uint16_t);

void
	__synapse_networking_address_v4_cleanup
		(__synapse_networking_address_v4*);