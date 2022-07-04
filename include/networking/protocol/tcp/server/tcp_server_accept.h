#pragma once
#include <networking/protocol/tcp/server/tcp_server_type.h>

synapse_networking_tcp
synapse_networking_tcp_server_accept_v4_once
	(synapse_networking_tcp_server);

void
synapse_networking_tcp_server_accept_v4_multiple
	(synapse_networking_tcp_server, synapse_networking_tcp*, size_t);