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
/**
 * module dependencies
 */
#include "IpEndPoint.h"

/**
 * @brief managed interface for network access.
 *
 */
class Socket
{
private:
    /* data */
public:
    /**
     * @brief
     *
     */
    Socket(/* args */);

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
 *
 */
Socket::Socket(/* args */)
{
}

/**
 * @brief Destroy the Socket:: Socket object
 *
 */
Socket::~Socket()
{
}
#endif