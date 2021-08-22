#include <sys/socket.h>

namespace network {
namespace ip      {

    template <typename T>
    class tcp_operation
    {
    public:
        using network_handle_type  = int;
        using network_address_type = sockaddr_in;
        using network_io_type      = T*;
        
        using network_send_size    = std::size_t;
        using network_recv_size    = std::size_t;
        using network_res_size     = std::size_t;
        using network_ret_type     = int;

    public:
        network_handle_type network_open   ()                                                              { return ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); }
        void                network_close  (network_handle_type & h)                                       { closefd(h); }
        network_ret_type    network_connect(network_handle_type& h, network_address_type& addr)            { ::connect(h, addr, sizeof(network_address_type)); }

        network_res_size    network_send   (network_handle_type h, network_io_type c, network_send_size s) { ::send(h, c, s, 0); }
        network_res_size    network_recv   (network_handle_type h, network_io_type c, network_send_size s) { ::recv(h, c, s, 0); }
    };
}
}