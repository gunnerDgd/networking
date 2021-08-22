#include <network/utility.hpp>

namespace network {
    
    using tcp_socket    = network_device<uint8_t, uint8_t, tcp_operation   <uint8_t, uint8_t>>;
    using udp_socket    = network_device<uint8_t, uint8_t, udp_operation   <uint8_t, uint8_t>>;

    using v6_tcp_socket = network_device<uint8_t, uint8_t, tcp_operation_v6<uint8_t, uint8_t>>;
    using v6_udp_socket = network_device<uint8_t, uint8_t, udp_operation_v6<uint8_t, uint8_t>>;
}