#include <networking/export/init.h>
#include <WinSock2.h>

WSADATA
    __synapse_networking_initdata;

synapse_networking_dll
    void
        synapse_networking_initialize_system
            ()
{
    WSAStartup
        (MAKEWORD(2, 2), &__synapse_networking_initdata);
}

synapse_networking_dll
    void
        synapse_networking_cleanup_system
            ()
{
    WSACleanup();
}
