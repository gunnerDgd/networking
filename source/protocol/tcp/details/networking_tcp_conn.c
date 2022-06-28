#include <networking/protocol/tcp/details/networking_tcp_conn.h>

bool
__synapse_networking_tcp_connect_v4
	(__synapse_networking_tcp* pTcp, __synapse_networking_address_v4* pV4Addr)
{
	return
		(connect(pTcp->hnd_tcp, &pV4Addr->hnd_v4_addr, sizeof(SOCKADDR_IN)) == 0)
			? true : false;
}

void
__synapse_networking_tcp_disconnect
	(__synapse_networking_tcp* pTcp)
{
	closesocket
		(pTcp->hnd_tcp);
}