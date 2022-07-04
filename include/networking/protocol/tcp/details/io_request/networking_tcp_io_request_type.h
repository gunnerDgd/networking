#pragma once
#include <WinSock2.h>

typedef struct __synapse_networking_tcp_io_request
{
	WSAOVERLAPPED
		hnd_aio_hnd;
	WSABUF
		hnd_aio_memory;

	void
		(*ptr_aio_completion)(size_t, void*);
	void
		 *ptr_aio_completion_param;
} __synapse_networking_tcp_io_request;