/**
 * @file Socket.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief managed interface for network access.
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SOCKET_H
#define SOCKET_H

// Operation Systems
#include <sys/socket.h>

/**
 * module dependencies
 */
#include "IpEndPoint.h"
/**
 * Specifies the addressing scheme that an instance of the Socket class can use.
 */
enum AddressFamiliy
{
    /**
     * Unix local to host address.
     */
    Unix = 1,

    /**
     * Address for IP version 4.
     */
    InterNetwork = 2
};

/**
 * communication type
 */
enum SocketType
{
    /**
     * SOCK_STREAM: TCP(reliable, connection oriented)
     */
    Stream = 1,
    /**
     * SOCK_DGRAM: UDP(unreliable, connectionless)
     */
    Datagram = 2
};

/**
 * Specifies the protocols that the Socket class supports.
 */
enum ProtocolType
{
    /**
     * Internet Protocol.
     */
    Ip = 0,

    /**
     * Internet Control Message Protocol.
     */
    Icmp = 1,

    /**
     * Internet Group Management Protocol.
     */
    Igmp = 2,

    /**
     * Gateway to Gateway Protocol.
     */
    Ggp = 3,

    /**
     * Internel Protocol Version 4.
     */
    IpV4 = 4
};

/**
 * @brief managed interface for network access.
 *
 */
class Socket
{
private:
    /**
     * @brief created socket number.
     *
     */
    int sock;

    /**
     * @brief maximum number of sockets that can be created.
     *
     */
    bool socks[65535];

    /**
     * @brief create a new socket
     *
     * @param addressFamiliy
     * @param socketType
     * @param protocolType
     * @return int
     */
    int create(AddressFamiliy addressFamiliy, SocketType socketType, ProtocolType protocolType)
    {
        // create a new socket
        sock = socket(addressFamiliy, socketType, protocolType);

        return sock;
    }

public:
    /**
     * @brief
     * Default
     * AddressFamiliy = InterNetwork
     * SocketType = Stream
     * ProtocolType = Ip
     */
    Socket();

    /**
     * @brief
     *
     */
    Socket(AddressFamiliy addressFamiliy, SocketType socketType, ProtocolType protocolType);

    /**
     * @brief Establishes a connection to a remote host.
     *
     * @param ipEndPoint
     * @return true
     * @return false
     */
    bool Connect(IpEndPoint ipEndPoint);

    /**
     * @brief Destroy the Socket object
     *
     */
    ~Socket();
};

/**
 * @brief
 * Default
 * AddressFamiliy = InterNetwork
 * SocketType = Stream
 * ProtocolType = Ip
 */
Socket::Socket()
{
    // create a new socket
    sock = create(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
}

/**
 * @brief
 *
 */
Socket::Socket(AddressFamiliy addressFamiliy, SocketType socketType, ProtocolType protocolType)
{
    // create a new socket
    sock = create(addressFamiliy, socketType, protocolType);
}

/**
 * @brief Destroy the Socket:: Socket object
 *
 */
Socket::~Socket()
{
}
#endif