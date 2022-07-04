#include <networking/protocol/tcp/details/networking_tcp_init.h>
#include <networking/address/v4/details/networking_address_v4.h>

__synapse_networking_tcp*
__synapse_networking_tcp_initialize_v4
	(synapse_networking_tcp_connected    pTcpConn,
	 synapse_networking_tcp_disconnected pTcpDisconn)
{
	__synapse_networking_tcp* ptr_tcp
		= malloc(sizeof(__synapse_networking_tcp));

	ptr_tcp->hnd_tcp
		= WSASocket(AF_INET, SOCK_STREAM, IPPROTO_TCP, 0, 0, WSA_FLAG_OVERLAPPED);

	ptr_tcp->tcp_aio_connected.ptr_onconn_parameter
		= pTcpConn.ptr_onconn_parameter;
	ptr_tcp->tcp_aio_connected.ptr_onconn_routine
		= pTcpConn.ptr_onconn_routine;

	ptr_tcp->tcp_aio_disconnected.ptr_ondisconn_parameter
		= pTcpDisconn.ptr_ondisconn_parameter;
	ptr_tcp->tcp_aio_disconnected.ptr_ondisconn_routine
		= pTcpDisconn.ptr_ondisconn_routine;

	return ptr_tcp;
}

void
__synapse_networking_tcp_cleanup
	(__synapse_networking_tcp* pTcp)
{
	closesocket
		(pTcp->hnd_tcp);
	free
		(pTcp);
}