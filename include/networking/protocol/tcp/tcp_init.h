#pragma once
#include <networking/protocol/tcp/tcp_type.h>

synapse_networking_tcp
synapse_networking_tcp_initialize_v4
	(synapse_execution_sched_traits*, synapse_networking_tcp_connected, synapse_networking_tcp_disconnected);

synapse_networking_tcp_io_request
synapse_networking_tcp_io_request_initialize
	(synapse_networking_tcp, void*, size_t, synapse_networking_tcp_completion);

synapse_networking_tcp_io_request
synapse_networking_tcp_io_request_initialize_from_existing
	(synapse_networking_tcp_io_request, synapse_networking_tcp, void*, size_t, synapse_networking_tcp_completion);

void
synapse_networking_tcp_cleanup
	(synapse_networking_tcp);

void
synapse_networking_tcp_io_request_cleanup
	(synapse_networking_tcp_io_request);

void
synapse_networking_tcp_assign_parameter
	(synapse_networking_tcp, void*);

void*
synapse_networking_tcp_retrieve_parameter
	(synapse_networking_tcp);