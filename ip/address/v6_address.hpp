#pragma once

#include <sys/socket.h>
#include <netinet/in.h>

#include <cstdint>
#include <string>

namespace network {
namespace ip      {

    class v6
    {
    public:
        v6(std::string v6_addr, uint);
    }
}
}