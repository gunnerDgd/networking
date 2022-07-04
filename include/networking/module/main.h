#pragma once
#include <modules/traits/modman_interface.h>
#include <modules/component/manager/component_manager_init.h>
#include <modules/component/manager/component_manager_manip.h>

#include <modules/modman/modman.h>

#include <networking/defines/export.h>

#include <networking/module/export/protocol/tcp/tcp.h>
#include <networking/module/export/protocol/tcp/tcp_io_request.h>
#include <networking/module/export/protocol/tcp/tcp_server_v4.h>

synapse_networking_export
	void
		synapse_modules_initialize
			(synapse_modules_interface*);

synapse_networking_export
	void
		synapse_modules_cleanup
			();

synapse_networking_export
	void
		synapse_networking_modules_attach
			(synapse_modules_handle);