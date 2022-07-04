#pragma once
#include <synapse/modules/traits/modman_interface.h>
#include <synapse/modules/traits/modman_component_interface.h>

#include <synapse/networking/module_export.h>

synapse_networking_export
void
	synapse_module_initialize
		(synapse_modules_interface*, synapse_modules_component_interface*);

synapse_networking_export
void
	synapse_module_cleanup
		();