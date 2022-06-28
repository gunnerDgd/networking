#pragma once
#include <WinSock2.h>
#include <stdint.h>

#include <networking/protocol/tcp/tcp_type.h>

#include <execution/traits/sched/sched_traits.h>
#include <networking/address/v4/address_v4.h>

typedef struct __synapse_networking_tcp
{
	SOCKET		  hnd_tcp	 ;
	synapse_execution_sched_traits*
			      hnd_tcp_sched;
	void*
				  hnd_tcp_param;

	synapse_networking_tcp_connected    
		tcp_aio_connected   ;
	synapse_networking_tcp_disconnected 
		tcp_aio_disconnected;
} __synapse_networking_tcp;

typedef struct __synapse_networking_tcp_io_request
{
	WSAOVERLAPPED ioreq_aio_hnd;
	__synapse_networking_tcp*
				  ioreq_tcp_hnd;

	WSABUF		  ioreq_buffer;
	DWORD		  ioreq_completion_size;
	synapse_networking_tcp_completion
				  ioreq_completion;
} __synapse_networking_tcp_io_request;