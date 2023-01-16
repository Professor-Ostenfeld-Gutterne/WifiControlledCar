/*******************************************************************************
 * @file main.cpp
 * @date 11/01/2023
 * @author Markus Rytter (mr@neocortec.com)
 *
 * @copyright Copyright (c) 2023
 *
 *******************************************************************************/
#include "gateway_connection.hpp"
#include "socket_host.hpp"

#include "neomesh_network.hpp"
#include "timestamp.hpp"

int main()
{
    Timestamp_t time;
    construct_timestamp_struct("2023-01-04T11:29:54.001Z", &time);
    NeomeshNetwork *network = get_network_at_time(&time);
    network->print_network_list();

    GatewayConnection gateway_connection("127.0.0.1", 2000, 2001);

    gateway_connection.request_neighbor_list();
    char        buffer[1024];
    SocketHost host("127.0.0.1", 2003);

    while (true)
    {
        host.read_socket();
        uint64_t const read = gateway_connection.read_socket(buffer, 1024);

        if (read > 0)
            printf("(%lu) %s\n", read, buffer);
    }
    return 0;
}