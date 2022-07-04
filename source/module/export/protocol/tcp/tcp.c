#include <networking/module/export/protocol/tcp/tcp.h>
#include <networking/module/tcp_module_type.h>

#include <networking/protocol/tcp/tcp.h>
#include <stdlib.h>

synapse_modules_component_interface
	synapse_networking_tcp_export
		()
{
	synapse_modules_component_interface
		hnd_component
			= {
				.construct
					= &synapse_networking_tcp_construct,
				.destruct
					= &synapse_networking_tcp_destruct,
				.duplicate
					= &synapse_networking_tcp_duplicate
			  };

	return
		hnd_component;
}

void*
	synapse_networking_tcp_construct
		(va_list pArgument)
{
	synapse_networking_tcp* ptr_handle
		= malloc(sizeof(synapse_networking_tcp));

	*ptr_handle
		= synapse_networking_tcp_initialize_v4
				(va_arg(pArgument, synapse_networking_tcp_connected),
				 va_arg(pArgument, synapse_networking_tcp_disconnected));
	return
		ptr_handle;
}

void
	synapse_networking_tcp_destruct
		(void* pTcpInterface)
{
	synapse_networking_tcp_cleanup
		(*(synapse_networking_tcp*)pTcpInterface);
	free
		(pTcpInterface);
}

void*
	synapse_networking_tcp_duplicate
		(void* pTcpInterface)
{
	synapse_tcp_v4* ptr_tcp
		= malloc(sizeof(synapse_tcp_v4));

	*ptr_tcp
		= *((synapse_tcp_v4*)pTcpInterface);
	return
		ptr_tcp;
}