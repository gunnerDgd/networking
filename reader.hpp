#include <cstdint>

namespace network {

    template <typename read_t, typename operation>
    class reader
    {
    public:
        using handle_type  = operation::network_handle_type;
        using address_type = operation::network_address_type;

        using recv_size    = opreation::network_recv_size;
        using recv_type    = std::conditional_t<std::is_array_v<recv_t>, std::remove_extent_t<recv_t>, std::remove_pointer_t<recv_t>>;

        using res_size     = operation::network_res_size ;
        using ret_type     = operation::network_ret_size ;

    public:
        reader(handle_type& h);

        ret_size read(read_t& context, recv_size );
    };
}