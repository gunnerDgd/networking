#pragma once
#include <WinSock2.h>

#include <networking/protocol/tcp/tcp_type.h>
#include <networking/protocol/tcp/server/tcp_server_type.h>

typedef struct __synapse_networking_tcp_server_connected
{
	void
		(*evt_handler)(synapse_networking_tcp, void*);
	void*
		  evt_handler_param;
} __synapse_networking_tcp_server_connected;

typedef struct __synapse_networking_tcp_server
{
	SOCKET hnd_tcp_srv ;

	__synapse_networking_tcp_server_connected
		   tcp_cli_init_conn;
	synapse_networking_tcp_disconnected
		   tcp_cli_init_disconn;
} __synapse_networking_tcp_server;