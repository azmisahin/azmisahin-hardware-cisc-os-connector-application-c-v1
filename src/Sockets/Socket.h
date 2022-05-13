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
//#include "IpAddress.h"
#include "IpEndPoint.h"
#include "ProtocolType.h"
#include "SocketType.h"
#include "SocketBase.h"

/**
 * @brief managed interface for network access.
 *
 */
class Socket
{
private:
    /**
     * base
     */
    SocketBase _base;

public:
    /**
     * @brief
     *
     */
    Socket()
    {
        _base = SocketBase();
    };

    /**
     * @brief Destroy the Socket object
     *
     */
    ~Socket(){

    };

    /**
     * @brief
     *
     */
    Socket(AddressFamiliy addressFamiliy, SocketType socketType, ProtocolType protocolType)
    {
        _base = SocketBase(addressFamiliy, socketType, protocolType);
    };

    /**
     * @brief Establishes a connection to a remote host.
     *
     * @param ipEndPoint
     * @return SocketStatus
     */
    SocketStatus Connect(IpEndPoint ipEndPoint)
    {
        return _base.Connect(ipEndPoint.Address().ToChar(), ipEndPoint.PortNumber());
    };

    /**
     * @brief Send a message
     *
     * @param char*
     * @return int
     */
    int Send(char *message)
    {
        return _base.Send(message);
    };

    /**
     * @brief Receive message
     *
     * @param int
     */
    int Receive()
    {
        return _base.Receive();
    }

    /**
     * @brief Socket id
     *
     * @param int
     */
    int Id()
    {
        return _base.Id();
    }

    /**
     * @brief
     */
    AddressFamiliy getAddressFamiliy()
    {
        return (AddressFamiliy)_base.AddressFamiliy();
    }

    /**
     * @brief
     */
    SocketType getSocketType()
    {
        return (SocketType)_base.SocketType();
    }

    /**
     * @brief
     */
    ProtocolType getProtocolType()
    {
        return (ProtocolType)_base.ProtocolType();
    }

    /**
     * @brief
     */
    IpEndPoint RemoteIpEndPoint()
    {
        IpAddress ipAddress(_base.HostName());
        IpEndPoint ipEndPoint(ipAddress, _base.PortNumber());
        return ipEndPoint;
    }

    /**
     * @brief
     */
    char *Message()
    {
        return _base.Message();
    }

    /**
     * @brief
     */
    char *Data()
    {
        return _base.Data();
    }
};
#endif