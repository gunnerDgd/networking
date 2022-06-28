#pragma once
#include <networking/protocol/tcp/tcp_type.h>

void
synapse_networking_tcp_send_to
	(synapse_networking_tcp, synapse_networking_tcp_io_request);

void
synapse_networking_tcp_receive_from
	(synapse_networking_tcp, synapse_networking_tcp_io_request);

size_t
synapse_networking_tcp_sync_send_to
	(synapse_networking_tcp, void*, size_t);

size_t
synapse_networking_tcp_sync_receive_from
	(synapse_networking_tcp, void*, size_t);