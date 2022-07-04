#pragma once
#include <networking/defines/export.h>

#include <modules/component/component.h>
#include <modules/traits/modman_component_interface.h>

synapse_modules_component_interface
	synapse_networking_tcp_server_v4_export
		();

void*
	synapse_networking_tcp_server_v4_construct
		(va_list);

void
	synapse_networking_tcp_server_v4_destruct
		(void*);

void*
	synapse_networking_tcp_server_v4_duplicate
		(void*);