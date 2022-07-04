#pragma once
#include <networking/protocol/tcp/tcp_type.h>
#include <networking/protocol/tcp/io_request/tcp_io_request_type.h>

synapse_networking_tcp_dll
synapse_networking_tcp_io_request
synapse_networking_tcp_io_request_initialize
	(void*, size_t, void(*)(size_t, void*), void*);

synapse_networking_tcp_dll
synapse_networking_tcp_io_request
synapse_networking_tcp_io_request_initialize_from_existing
	(synapse_networking_tcp_io_request, void*, size_t, void(*)(size_t, void*), void*);

synapse_networking_tcp_dll
void
synapse_networking_tcp_io_request_cleanup
	(synapse_networking_tcp_io_request);