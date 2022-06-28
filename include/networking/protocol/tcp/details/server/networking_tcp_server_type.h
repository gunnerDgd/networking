#pragma once
#include <WinSock2.h>

#include <networking/protocol/tcp/tcp_type.h>
#include <networking/protocol/tcp/server/tcp_server_type.h>

#include <execution/traits/sched/sched_traits.h>

typedef struct __synapse_networking_tcp_server
{
	SOCKET hnd_tcp_srv ;
	synapse_execution_sched_traits*
		   tcp_srv_exec;

	synapse_networking_tcp_connected
		   tcp_cli_init_conn;
	synapse_networking_tcp_disconnected
		   tcp_cli_init_disconn;
} __synapse_networking_tcp_server;