#pragma once
#include <networking/protocol/tcp/details/networking_tcp_type.h>
#include <networking/protocol/tcp/tcp_type.h>

#include <networking/address/v4/address_v4.h>

__synapse_networking_tcp*
__synapse_networking_tcp_initialize_v4
	(synapse_networking_tcp_connected, synapse_networking_tcp_disconnected);

void
__synapse_networking_tcp_cleanup
	(__synapse_networking_tcp*);