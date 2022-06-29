#include <modules.h>
#include <Windows.h>

HMODULE
	__synapse_networking_module_tcp,
	__synapse_networking_module_tcp_server;

synapse_modules_export
void synapse_module_entry()
{

}

synapse_modules_export
void 
synapse_module_initialize
	(synapse_modules_interface* pInterface)
{
	pInterface->attach
		= &synapse_networking_module_attach;
	pInterface->detach
		= &synapse_networking_module_detach;
	pInterface->reload
		= &synapse_networking_module_reload;

	strcpy
		(pInterface->modules_name, "synapse-networking");

	__synapse_networking_module_tcp
		= LoadLibraryA("./synapse-networking-tcp.dll");
	__synapse_networking_module_tcp_server
		= LoadLibraryA("./synapse-networking-tcp-server.dll");
}

synapse_modules_export
void
synapse_module_cleanup
	()
{
	FreeLibrary
		(__synapse_networking_module_tcp);
	FreeLibrary
		(__synapse_networking_module_tcp_server);
}

void 
synapse_networking_module_attach
	(synapse_modules_handle pHandle, void* pParameter) {}

void 
synapse_networking_module_detach
	(synapse_modules_handle pHandle, void* pParameter) {}

void
synapse_networking_module_reload
	(synapse_modules_handle pHandle, void* pParameter) {}