#pragma once
#include <stdint.h>
#include <networking/defines/opaque/opaque.h>
#include <networking/defines/export.h>

#include <execution/traits/sched/sched_traits.h>

synapse_networking_opaque_declare
	(synapse_networking_tcp);

synapse_networking_opaque_declare
	(synapse_networking_tcp_io_request);

typedef
	void(*synapse_networking_tcp_connected)   (synapse_networking_tcp);
typedef
	void(*synapse_networking_tcp_disconnected)(synapse_networking_tcp);
typedef
	void(*synapse_networking_tcp_completion)  (synapse_networking_tcp, size_t);