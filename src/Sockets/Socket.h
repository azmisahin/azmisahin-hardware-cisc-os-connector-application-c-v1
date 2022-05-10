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

#include "AddressFamiliy.h"
#include "IpAddress.h"
#include "IpEndPoint.h"
#include "ProtocolType.h"
#include "SocketType.h"

/**
 * @brief managed interface for network access.
 *
 */
class Socket
{
private:
    /**
     * @brief
     */
    AddressFamiliy _addressFamiliy;

    /**
     * @brief
     */
    SocketType _socketType;

    /**
     * @brief
     */
    ProtocolType _protocolType;

    /**
     * @brief
     */
    IpEndPoint _ipEndPoint;

    /**
     * @brief
     */
    char *_message;

    /**
     * @brief
     */
    char *_data;

    /**
     * @brief created socket number.
     *
     */
    int _id;

public:
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
     * @brief Send a message
     *
     * @param char*
     * @return int
     */
    int Send(const char *message);

    /**
     * @brief Receive message
     *
     * @param int
     */
    int Receive();

    /**
     * @brief Socket id
     *
     * @param int
     */
    int Id()
    {
        return _id;
    }

    /**
     * @brief
     */
    AddressFamiliy AddressFamiliy()
    {
        return _addressFamiliy;
    }

    /**
     * @brief
     */
    SocketType SocketType()
    {
        return _socketType;
    }

    /**
     * @brief
     */
    ProtocolType ProtocolType()
    {
        return _protocolType;
    }

    /**
     * @brief
     */
    IpEndPoint IpEndPoint()
    {
        return _ipEndPoint;
    }

    /**
     * @brief
     */
    char *Message()
    {
        return _message;
    }

    /**
     * @brief
     */
    char *Data()
    {
        return _data;
    }

    /**
     * @brief Destroy the Socket object
     *
     */
    ~Socket();
};
#endif