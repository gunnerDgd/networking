#include <networking/module/main.h>
#include <networking/module/tcp_module_type.h>

#include <string.h>

static synapse_tcp_v4
			__synapse_networking_tcp_v4_typedata;
static synapse_tcp_server_v4
			__synapse_networking_tcp_server_v4_typedata;

synapse_networking_export
void
	synapse_modules_initialize
		(synapse_modules_interface* pInterface)
{
	strcpy
		(pInterface->modules_name, "synapse-networking");
	pInterface->attach
		= &synapse_networking_modules_attach;
}

synapse_networking_export
void
	synapse_modules_cleanup
		()
{
	
}

synapse_networking_export
void
	synapse_networking_modules_attach
		(synapse_modules_handle pHandle)
{
	synapse_modules_component_manager
		hnd_compmgr
			= synapse_modules_modman_module_retrieve_component_manager
					(pHandle);

	synapse_modules_component_manager_register_interface
		(hnd_compmgr, 
			synapse_networking_tcp_export(), "tcp_v4",
				&__synapse_networking_tcp_v4_typedata);
	synapse_modules_component_manager_register_interface
		(hnd_compmgr, 
			synapse_networking_tcp_server_v4_export(), "tcp_server_v4",
				&__synapse_networking_tcp_server_v4_typedata);
	synapse_modules_component_manager_register_interface
		(hnd_compmgr, 
			synapse_networking_tcp_io_request_export(), 
				"tcp_io_request", NULL);
}