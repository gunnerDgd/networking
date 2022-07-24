#pragma once
#include <networking/tcp/details/tcp_type.h>

__synapse_networking_tcp*
    __synapse_networking_tcp_initialize_v4
        ();

void
    __synapse_networking_tcp_cleanup
        (__synapse_networking_tcp*);