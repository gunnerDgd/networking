#pragma once
#include <networking/address/v4/address_v4_type.h>
#include <networking/protocol/tcp/details/server/networking_tcp_server_type.h>

__synapse_networking_tcp_server*
__synapse_networking_tcp_server_initialize_v4
	(synapse_execution_sched_traits* ,
	 synapse_networking_tcp_connected, 
	 synapse_networking_tcp_disconnected);

void
__synapse_networking_tcp_server_bind_v4
	(synapse_networking_address_v4, __synapse_networking_tcp_server*);

void
__synapse_networking_tcp_server_listen
	(__synapse_networking_tcp_server*, uint32_t);

void
__synapse_networkling_tcp_server_cleanup
	(__synapse_networking_tcp_server*);