#pragma once
#include <networking/protocol/tcp/details/networking_tcp_type.h>
#include <networking/protocol/tcp/tcp_type.h>

#include <networking/address/v4/address_v4.h>

__synapse_networking_tcp*
__synapse_networking_tcp_initialize_v4
	(synapse_execution_sched_traits*, synapse_networking_tcp_connected, synapse_networking_tcp_disconnected);

__synapse_networking_tcp_io_request*
__synapse_networking_tcp_io_request_initialize
	(__synapse_networking_tcp*, void*, size_t, synapse_networking_tcp_completion);

__synapse_networking_tcp_io_request*
__synapse_networking_tcp_io_request_initialize_from_existing
	(__synapse_networking_tcp_io_request*, __synapse_networking_tcp*, void*, size_t, synapse_networking_tcp_completion);

void
__synapse_networking_tcp_cleanup
	(__synapse_networking_tcp*);

void
__synapse_networking_tcp_io_request_cleanup
	(__synapse_networking_tcp_io_request*);