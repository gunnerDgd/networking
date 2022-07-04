#pragma once
#include <modules/traits/modman_interface.h>
#include <networking/defines/export.h>

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
			();