#pragma once
#include <networking/interface/address/v4.h>

synapse_networking_address_v4
	synapse_networking_address_v4_initialize
		(const char*, uint16_t);

void
	synapse_networking_address_v4_cleanup
		(synapse_networking_address_v4);

uint32_t
	synapse_networking_address_v4_retrieve_address
		(synapse_networking_address_v4);

uint16_t
	synapse_networking_address_v4_retrieve_port
		(synapse_networking_address_v4);