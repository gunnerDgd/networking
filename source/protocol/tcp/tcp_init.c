#include <networking/protocol/tcp/tcp_type.h>
#include <networking/protocol/tcp/details/networking_tcp_init.h>

synapse_networking_tcp
synapse_networking_tcp_initialize_v4
	(synapse_execution_sched_traits		*pSched, 
	 synapse_networking_tcp_connected    pTcpConn, 
	 synapse_networking_tcp_disconnected pTcpDisconn)
{
	synapse_networking_opaque_init
		(synapse_networking_tcp, ptr_tcp,
			__synapse_networking_tcp_initialize_v4(pSched, pTcpConn, pTcpDisconn));

	return
		ptr_tcp;
}

synapse_networking_tcp_io_request
synapse_networking_tcp_io_request_initialize
	(synapse_networking_tcp			   pTcp	     ,
	 void							  *pTcpIoPtr ,
	 size_t							   pTcpIoSize, 
	 synapse_networking_tcp_completion pTcpIoComp)
{
	synapse_networking_opaque_init
		(synapse_networking_tcp_io_request, ptr_ioreq,
			__synapse_networking_tcp_io_request_initialize
				(synapse_networking_opaque_reference(pTcp), pTcpIoPtr, pTcpIoSize, pTcpIoComp));

	return
		ptr_ioreq;
}

synapse_networking_tcp_io_request
synapse_networking_tcp_io_request_initialize_from_existing
	(synapse_networking_tcp_io_request pIoReq	 , 
	 synapse_networking_tcp			   pTcp	     , 
	 void							  *pTcpIoPtr , 
	 size_t							   pTcpIoSize, 
	 synapse_networking_tcp_completion pTcpIoComp)
{
	synapse_networking_opaque_reference(pIoReq)
		= __synapse_networking_tcp_io_request_initialize_from_existing
				(synapse_networking_opaque_reference(pIoReq),
				 synapse_networking_opaque_reference(pTcp)  ,
				 pTcpIoPtr, pTcpIoSize, pTcpIoComp);

	return
		pIoReq;
}

void
synapse_networking_tcp_cleanup
	(synapse_networking_tcp pTcp)
{
	__synapse_networking_tcp_cleanup
		(synapse_networking_opaque_reference(pTcp));
}

void
synapse_networking_tcp_io_request_cleanup
	(synapse_networking_tcp_io_request pIoReq)
{
	__synapse_networking_tcp_io_request_cleanup
		(synapse_networking_opaque_reference(pIoReq));
}