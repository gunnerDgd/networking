#pragma once
#include <networking/protocol/tcp/tcp.h>
#include <networking/protocol/tcp/server/tcp_server_type.h>

typedef struct synapse_tcp_v4
{
	void
		(*send_to)
			(synapse_networking_tcp, synapse_networking_tcp_io_request);
	void
		(*receive_from)
			(synapse_networking_tcp, synapse_networking_tcp_io_request);
	void
		(*connect)
			(synapse_networking_tcp, synapse_networking_address_v4);
	void
		(*disconnect)
			(synapse_networking_tcp);
} synapse_tcp_v4;

typedef struct synapse_tcp_server_v4
{
	void
		(*bind)
			(synapse_networking_tcp_server, synapse_networking_address_v4);
	void
		(*listen)
			(synapse_networking_tcp_server, uint32_t);
	void
		(*accept_once)
			(synapse_networking_tcp_server);
	void
		(*accept_multiple)
			(synapse_networking_tcp_server, synapse_networking_tcp*, size_t);
} synapse_tcp_server_v4;