#include <networking/export/tcp/tcp_aio_manip.h>
#include <networking/tcp/aio/aio_tcp_manip.h>

synapse_networking_dll
    void
        synapse_tcp_aio_receive_from
            (synapse_tcp_aio pAioTcp, synapse_networking_io_request pIoRequest)
{
    synapse_networking_tcp_aio_receive_from
        (pAioTcp, pIoRequest);
}

synapse_networking_dll
    void
        synapse_tcp_aio_send_to
            (synapse_tcp_aio pAioTcp, synapse_networking_io_request pIoRequest)
{
    synapse_networking_tcp_aio_send_to
        (pAioTcp, pIoRequest);
}