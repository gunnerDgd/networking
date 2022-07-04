#include "../tcp_module_main.h"
#include <string.h>
#include <WinSock2.h>

static WSADATA
			__synapse_tcp_ws2ver;

synapse_networking_export
void
synapse_module_initialize
	(synapse_modules_interface* pInterface, synapse_modules_component_interface* pComponentInterface)
{
	strcpy
		(pInterface->modules_name,
			"synapse-networking-tcp");

	WSAStartup
		(MAKEWORD(2, 2), &__synapse_tcp_ws2ver);
}

synapse_networking_export
void
synapse_module_cleanup
	()
{
	WSACleanup();
}