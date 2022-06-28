#pragma once
#include <networking/protocol/tcp/details/networking_tcp_type.h>

void
__synapse_networking_tcp_do_recv_from
	(DWORD, DWORD, LPWSAOVERLAPPED, DWORD);

void
__synapse_networking_tcp_do_send_to
	(DWORD, DWORD, LPWSAOVERLAPPED, DWORD);