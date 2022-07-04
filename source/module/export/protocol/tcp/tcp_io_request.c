#include <networking/module/export/protocol/tcp/tcp_io_request.h>
#include <networking/protocol/tcp/io_request/tcp_io_request.h>

#include <stdlib.h>

synapse_modules_component_interface
	synapse_networking_tcp_io_request_export
		()
{
	synapse_modules_component_interface
		hnd_interface
			= {
				.construct
					= &synapse_networking_tcp_io_request_construct,
				.destruct
					= &synapse_networking_tcp_io_request_destruct,
				.duplicate
					= &synapse_networking_tcp_io_request_duplicate
			  };

	return
		hnd_interface;
}

void*
	synapse_networking_tcp_io_request_construct
		(va_list pArgument)
{
	synapse_networking_tcp_io_request*
		hnd_io_request
			= malloc(sizeof(synapse_networking_tcp_io_request));
	
	*hnd_io_request
		= synapse_networking_tcp_io_request_initialize
				(va_arg(pArgument, void*) ,
				 va_arg(pArgument, size_t),
				 va_arg(pArgument, void*) ,
				 va_arg(pArgument, void*));

	return
		hnd_io_request;
}

void
	synapse_networking_tcp_io_request_destruct
		(void* pIoRequest)
{
	synapse_networking_tcp_io_request*
		hnd_io_request
			= pIoRequest;

	synapse_networking_tcp_io_request_cleanup
		(*hnd_io_request);
	free
		(pIoRequest);
}

void*
	synapse_networking_tcp_io_request_duplicate
		(void* pIoRequest) { return NULL; }