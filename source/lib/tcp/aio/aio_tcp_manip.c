#include <networking/tcp/aio/aio_tcp_manip.h>
#include <networking/tcp/details/aio/aio_tcp_manip.h>

void
    synapse_networking_tcp_aio_receive_from
        (synapse_networking_tcp_aio    pAioTcp,
         synapse_networking_io_request pIoRequest)
{
    __synapse_networking_tcp_aio_receive_from
        (synapse_networking_opaque_reference
            (pAioTcp),
         synapse_networking_opaque_reference
            (pIoRequest));
}

void
    synapse_networking_tcp_aio_send_to
        (synapse_networking_tcp_aio    pAioTcp,
         synapse_networking_io_request pIoRequest)
{
    __synapse_networking_tcp_aio_send_to
        (synapse_networking_opaque_reference
            (pAioTcp),
         synapse_networking_opaque_reference
            (pIoRequest));
}