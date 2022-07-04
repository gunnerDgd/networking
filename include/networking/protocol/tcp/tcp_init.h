#pragma once
#include <networking/protocol/tcp/tcp_type.h>

synapse_networking_tcp
synapse_networking_tcp_initialize_v4
	(synapse_networking_tcp_connected, synapse_networking_tcp_disconnected);

void
synapse_networking_tcp_cleanup
	(synapse_networking_tcp);