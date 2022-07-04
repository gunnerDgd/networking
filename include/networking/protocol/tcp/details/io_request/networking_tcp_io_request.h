#pragma once
#include <networking/protocol/tcp/details/networking_tcp_type.h>

__synapse_networking_tcp_io_request*
__synapse_networking_tcp_io_request_initialize
	(void*, size_t, void(*)(size_t, void*), void*);

__synapse_networking_tcp_io_request*
__synapse_networking_tcp_io_request_initialize_from_existing
	(__synapse_networking_tcp_io_request*, void*, size_t, void(*)(size_t, void*), void*);

void
__synapse_networking_tcp_io_request_cleanup
	(__synapse_networking_tcp_io_request*);