#include <cstdint>

namespace network {
namespace ip      {

    enum  network_error
    {
        socket_creation = (1 << 0),
        socket_send     = (1 << 1),
        socket_receive  = (1 << 2)
    };

    template <typename send_t, typename recv_t, typename operation>
    class network_device
    {
    public:
        using handle_type  = operation::network_handle_type;
        using address_type = operation::network_address_type;
        
        using send_size    = operation::network_send_size;
        using send_type    = std::conditional_t<std::is_array_v<send_t>, std::remove_extent_t<send_t>, std::remove_pointer_t<send_t>>;

        using recv_size    = opreation::network_recv_size;
        using recv_type    = std::conditional_t<std::is_array_v<recv_t>, std::remove_extent_t<recv_t>, std::remove_pointer_t<recv_t>>;

        using res_size     = operation::network_res_size ;
        using ret_type     = operation::network_ret_size ;

    
    public:
        network_device(address_type& addr)
            : networking_handle(operation::network_open()) { }

        ret_size connect   () { return operation::network_connect   (networking_handle, networking_address); }
        void     disconnect() {        operation::network_disconnect(networking_handle)                    ; }
    
    public:
        res_size send      (send_type& context, send_size size)
        {
            ret_size     = operation::network_send(&context, size);
            if(ret_size == operation::network_send_error)
                networking_error |= network_error::sock_send;

            return ret_size;
        }

        res_size recv      (recv_type& context, recv_size size)
        {
            ret_size     = operation::network_recv(&context, size);
            if(ret_size == operation::network_recv_error)
                networking_error |= network_error::sock_recv;

            return ret_size;
        }

    protected:
        handle_type   networking_handle ;
        address_type  networking_address;
        network_error networking_error  ;
    };
}
}