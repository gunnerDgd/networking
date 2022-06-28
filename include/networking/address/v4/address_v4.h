#pragma once
#include <networking/address/v4/address_v4_type.h>

synapse_networking_address_v4
synapse_networking_address_v4_initialize
	(const char*, uint16_t);

void
synapse_networking_address_v4_cleanup
	(synapse_networking_address_v4);

void
synapse_networking_address_v4_assign
	(synapse_networking_address_v4, const char*, uint16_t);

void
synapse_networking_address_v4_retrieve
	(synapse_networking_address_v4, char*, uint16_t*);