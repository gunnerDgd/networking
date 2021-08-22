
namespace network {
    
    template <typename T>
    concept bool NetworkTyped = 
    {
        typename T::send_size;
        typename T::send_type;

        typename T::recv_size;
        typename T::recv_type;
        typename T::res_size ;
    };

    template <NetworkTyped T>
    concept bool Sendable      = requires(T n, T::io_type c, T::send_size s) { n.send(c, s); };

    template <NetworkTyped T>
    concept bool Receivable    = requires(T n, T::io_type c, T::recv_size s) { n.recv(c, s); };

    template <typename T>
    concept bool NetworkReader = NetworkTyped<T> && Receivable<T>;

    template <typename T>
    concept bool NetworkWriter = NetworkTyped<T> && Sendable<T>;

    template <typename T>
    concept bool NetworkDevice = NetworkReader<T> && NetworkWriter<T>;

    template <NetworkWriter network_device>
    typename network_device::res_size send_to  (network_device& n, typename network_device::send_type& t, typename network_device::send_size s) { return n.send(t, s); }

    template <NetworkReader network_device>
    typename network_device::res_size recv_from(network_device& n, typename network_device::recv_type& t, typename network_device::recv_size s) { return n.recv(t, s); }
}