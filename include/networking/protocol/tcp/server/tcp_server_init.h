#pragma once
#include <networking/protocol/tcp/server/tcp_server_type.h>
#include <networking/address/v4/address_v4_type.h>

synapse_networking_export
synapse_networking_tcp_server
synapse_networking_tcp_server_initialize_v4
	(synapse_execution_sched_traits* , 
	 synapse_networking_tcp_connected,
	 synapse_networking_tcp_disconnected);

synapse_networking_export
void
synapse_networking_tcp_server_bind_v4
	(synapse_networking_tcp_server, synapse_networking_address_v4);

synapse_networking_export
void
synapse_networking_tcp_server_listen
	(synapse_networking_tcp_server, uint32_t);

synapse_networking_export
void
synapse_networking_tcp_server_cleanup
	(synapse_networking_tcp_server);