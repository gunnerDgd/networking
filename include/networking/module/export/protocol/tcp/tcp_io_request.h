#pragma once
#include <networking/defines/export.h>

#include <modules/component/component.h>
#include <modules/traits/modman_component_interface.h>

synapse_modules_component_interface
	synapse_networking_tcp_io_request_export
		();

void*
	synapse_networking_tcp_io_request_construct
		(va_list);

void
	synapse_networking_tcp_io_request_destruct
		(void*);

void*
	synapse_networking_tcp_io_request_duplicate
		(void*);