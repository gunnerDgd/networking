#pragma once
#include <stdint.h>
#include <WinSock2.h>

typedef struct __synapse_networking_address_v4
{
	SOCKADDR_IN hnd_v4_addr;
} __synapse_networking_address_v4;