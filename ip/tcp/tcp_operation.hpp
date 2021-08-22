#include <network/ip/address/v4_address.hpp>

namespace network {
namespace ip      {

    template <typename send_t, typename recv_t>
    class tcp_operation
    {
    public:
        using network_handle_type  = int;
        using network_address_type = ::network::ip::v4;
        
        using network_send_size    = std::size_t;
        using network_recv_size    = std::size_t;
        
        using network_res_size     = std::ssize_t;
        using network_ret_type     = int;

        static constexpr network_res_size network_send_error = -1;
        static constexpr network_res_size network_recv_error = -1;

    public:
        network_handle_type network_open   ()                                                      { return ::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); }
        void                network_close  (network_handle_type & h)                               { closefd(h); }
        network_ret_type    network_connect(network_handle_type& h, network_address_type& addr)    { ::connect(h, &addr.context(), sizeof(sockaddr_in)); }

        network_res_size    network_send   (network_handle_type h, send_t* c, network_send_size s) { ::send(h, c, s, 0); }
        network_res_size    network_recv   (network_handle_type h, recv_t* c, network_recv_size s) { ::recv(h, c, s, 0); }
    };

    template <typename send_t, typename recv_t>
    class tcp_operation_v6
    {
    public:
        using network_handle_type  = int;
        using network_address_type = ::network::ip::v6;
        
        using network_send_size    = std::size_t;
        using network_recv_size    = std::size_t;
        
        using network_res_size     = std::ssize_t;
        using network_ret_type     = int;

        static constexpr network_res_size network_send_error = -1;
        static constexpr network_res_size network_recv_error = -1;

    public:
        network_handle_type network_open   ()                                                      { return ::socket(AF_INET6, SOCK_STREAM, IPPROTO_TCP); }
        void                network_close  (network_handle_type & h)                               { closefd(h); }
        network_ret_type    network_connect(network_handle_type& h, network_address_type& addr)    { ::connect(h, &addr.context(), sizeof(sockaddr_in)); }

        network_res_size    network_send   (network_handle_type h, send_t* c, network_send_size s) { ::send(h, c, s, 0); }
        network_res_size    network_recv   (network_handle_type h, recv_t* c, network_recv_size s) { ::recv(h, c, s, 0); }
    };
}
}