#pragma once
#include <networking/protocol/tcp/tcp_type.h>
#include <networking/address/v4/address_v4.h>

#include <stdbool.h>

synapse_networking_tcp_dll
bool
synapse_networking_tcp_connect_v4
	(synapse_networking_tcp, synapse_networking_address_v4);

synapse_networking_tcp_dll
void
synapse_networking_tcp_disconnect
	(synapse_networking_tcp);