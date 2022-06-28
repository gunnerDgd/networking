#pragma once
#include <networking/protocol/tcp/details/networking_tcp_type.h>
#include <networking/address/v4/details/networking_address_v4.h>

#include <stdbool.h>

bool
__synapse_networking_tcp_connect_v4
	(__synapse_networking_tcp*, __synapse_networking_address_v4*);

void
__synapse_networking_tcp_disconnect
	(__synapse_networking_tcp*);