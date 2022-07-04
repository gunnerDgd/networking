#include <networking/module/export/protocol/tcp/tcp_server_v4.h>

#include <networking/protocol/tcp/server/tcp_server_init.h>
#include <networking/protocol/tcp/server/tcp_server_accept.h>

#include <stdlib.h>

synapse_modules_component_interface
	synapse_networking_tcp_server_v4_export
		()
{
	synapse_modules_component_interface
		hnd_interface;

	hnd_interface.construct
		= &synapse_networking_tcp_server_v4_construct;
	hnd_interface.destruct
		= &synapse_networking_tcp_server_v4_destruct ;
	hnd_interface.duplicate
		= &synapse_networking_tcp_server_v4_duplicate;

	return
		hnd_interface;
}

void*
	synapse_networking_tcp_server_v4_construct
		(va_list pArgument)
{
	synapse_networking_tcp_server
		*ptr_server
			= malloc
				(sizeof(synapse_networking_tcp_server));

	*ptr_server
		= synapse_networking_tcp_server_initialize_v4
				(va_arg(pArgument, synapse_networking_tcp_server_connected),
				 va_arg(pArgument, synapse_networking_tcp_disconnected));

	return
		ptr_server;
}

void
	synapse_networking_tcp_server_v4_destruct
		(void* pVoidServer)
{
	synapse_networking_tcp_server_cleanup
		(*(synapse_networking_tcp_server*)pVoidServer);
	free
		(pVoidServer);
}

void*
	synapse_networking_tcp_server_v4_duplicate
		(void* pVoidServer)
{
	return NULL;
}