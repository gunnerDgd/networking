#pragma once
#include <networking/protocol/tcp/details/networking_tcp_type.h>

void
__synapse_networking_tcp_send_to
	(__synapse_networking_tcp*, __synapse_networking_tcp_io_request*);

void
__synapse_networking_tcp_receive_from
	(__synapse_networking_tcp*, __synapse_networking_tcp_io_request*);