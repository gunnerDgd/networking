#include <network/ip/tcp/tcp_operation.hpp>

namespace network {
namespace ip      {

    template <typename T = uint8_t, typename operation = tcp_operation<T>>
    class tcp
    {
    public:
        using handle_type  = operation::network_handle_type;
        using address_type = operation::network_address_type;
        using io_type      = operation::network_io_type;
        
        using send_size    = operation::network_send_size;
        using send_type    = T*;

        using recv_size    = opreation::network_recv_size;
        using recv_type    = T*;

        using res_size     = operation::network_res_size ;
        using ret_size     = operation::network_ret_size ;

    
    public:
        tcp(std::string ip, uint16_t port)
            : tcp_socket(operation::network_open()) { }

        ret_size connect() { }

    public:

    protected:
        handle_type tcp_socket;
        address_type 
    };
}
}

template <typename T, typename operation>
network::ip::tcp<T, operation>::tcp(std::string ip, uint8_t port)
{
    address_type addr;
    addr.sin_family      = AF_INET;
    addr.sin_port        = htons(port);
    addr.sin_addr.s_addr = inet_addr(ip.c_str());

    tcp_socket = operation::network_open(addr);
}