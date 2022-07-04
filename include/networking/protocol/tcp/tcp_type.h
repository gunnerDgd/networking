#pragma once
#include <stdint.h>
#include <networking/defines/opaque/opaque.h>
#include <networking/defines/export.h>

synapse_networking_opaque_declare
	(synapse_networking_tcp);

typedef struct synapse_networking_tcp_connected
{
	void
		(*ptr_onconn_routine)(void*);
	void*
		  ptr_onconn_parameter;
} synapse_networking_tcp_connected;

typedef struct synapse_networking_tcp_disconnected
{
	void
		(*ptr_ondisconn_routine)(void*);
	void*
		  ptr_ondisconn_parameter;
} synapse_networking_tcp_disconnected;