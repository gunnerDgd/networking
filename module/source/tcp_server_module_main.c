#include "../tcp_server_module_main.h"

#include <WinSock2.h>
#include <string.h>

static WSADATA
			__synapse_tcp_server_ws2ver;

synapse_networking_export
void
synapse_module_initialize
	(synapse_modules_interface* pInterface, synapse_modules_component_interface* pComponent)
{
	strcpy
		(pInterface->modules_name,
			"synapse-networking-tcp-server");
}

synapse_networking_export
void
synapse_module_cleanup
	()
{
}