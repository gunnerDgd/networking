#pragma once
#include <networking/protocol/tcp/server/tcp_server_type.h>

synapse_networking_export
synapse_networking_tcp
synapse_networking_tcp_server_accept_once
	(synapse_networking_tcp_server);

synapse_networking_export
void
synapse_networking_tcp_server_accept_multiple
	(synapse_networking_tcp_server, synapse_networking_tcp*, size_t);