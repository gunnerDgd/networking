#pragma once
#include <networking/protocol/tcp/tcp_type.h>
#include <networking/protocol/tcp/io_request/tcp_io_request_type.h>

synapse_networking_tcp_dll
void
synapse_networking_tcp_send_to
	(synapse_networking_tcp, synapse_networking_tcp_io_request);

synapse_networking_tcp_dll
void
synapse_networking_tcp_receive_from
	(synapse_networking_tcp, synapse_networking_tcp_io_request);