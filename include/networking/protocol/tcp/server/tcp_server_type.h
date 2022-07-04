#pragma once
#include <networking/defines/opaque/opaque.h>
#include <networking/protocol/tcp/tcp_type.h>

#include <stdint.h>

typedef struct synapse_networking_tcp_server_connected
{
	void
		(*evt_handler)(synapse_networking_tcp, void*);
	void*
		  evt_handler_param;
} synapse_networking_tcp_server_connected;

synapse_networking_opaque_declare
	(synapse_networking_tcp_server);