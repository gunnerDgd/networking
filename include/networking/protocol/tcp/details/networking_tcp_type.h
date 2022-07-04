#pragma once
#include <networking/address/v4/details/networking_address_v4_type.h>
#include <stdint.h>

typedef struct __synapse_networking_tcp_connected
{
	void
		(*ptr_onconn_routine)(void*);
	void*
		  ptr_onconn_parameter;
} __synapse_networking_tcp_connected;

typedef struct __synapse_networking_tcp_disconnected
{
	void
		(*ptr_ondisconn_routine)(void*);
	void*
		  ptr_ondisconn_parameter;
} __synapse_networking_tcp_disconnected;

typedef struct __synapse_networking_tcp
{
	SOCKET
		hnd_tcp	 ;
	union
	{
		__synapse_networking_address_v4
			hnd_tcp_addr_v4;
	};
	int				 hnd_tcp_addr_size;

	__synapse_networking_tcp_connected
		tcp_aio_connected   ;
	__synapse_networking_tcp_disconnected
		tcp_aio_disconnected;
} __synapse_networking_tcp;

typedef struct __synapse_networking_tcp_io_request
{
	WSAOVERLAPPED ioreq_aio_hnd;
	WSABUF		  ioreq_buffer;
	DWORD		  ioreq_completion_size;

	void
				(*ptr_ioreq_completion)(size_t, void*);
	void*
				  ptr_ioreq_completion_param;
} __synapse_networking_tcp_io_request;
