/**
 * @file SocketBase.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief managed interface for network access base.
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef SOCKETBASE_H
#define SOCKETBASE_H

/**
 * module dependencies
 */

/**
 * @brief managed interface for network access.
 *
 */
class SocketBase
{
private:
    /**
     * @brief
     */
    int _addressFamiliy;

    /**
     * @brief
     */
    int _socketType;

    /**
     * @brief
     */
    int _protocolType;

    /**
     * @brief
     */
    char *_hostName;

    /**
     * @brief
     */
    int _portNumber;

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
    SocketBase(int addressFamiliy, int socketType, int protocolType);

    /**
     * @brief Establishes a connection to a remote host.
     *
     * @param ipEndPoint
     * @return true
     * @return false
     */
    bool Connect(char *hostName, int portNumber);

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
    int AddressFamiliy()
    {
        return _addressFamiliy;
    }

    /**
     * @brief
     */
    int SocketType()
    {
        return _socketType;
    }

    /**
     * @brief
     */
    int ProtocolType()
    {
        return _protocolType;
    }

    /**
     * @brief
     */
    char *HostName()
    {
        return _hostName;
    }

    /**
     * @brief
     */
    int PortNumber()
    {
        return _portNumber;
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
    ~SocketBase();
};
#endif