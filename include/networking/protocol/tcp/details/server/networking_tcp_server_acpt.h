#pragma once
#include <networking/protocol/tcp/details/server/networking_tcp_server_type.h>
#include <networking/protocol/tcp/details/networking_tcp_type.h>

__synapse_networking_tcp*
__synapse_networking_tcp_server_accept_v4_once
	(__synapse_networking_tcp_server*);

void
__synapse_networking_tcp_server_accept_v4_multiple
	(__synapse_networking_tcp_server*, synapse_networking_tcp*, size_t);