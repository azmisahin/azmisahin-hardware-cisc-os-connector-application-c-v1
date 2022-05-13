/**
 * @file Socket_Spec.cpp
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief managed interface for network access
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/Socket.h"
#include "../../TestTool.h"

bool Constractor_AddressFamiliySpec()
{
    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    // InterNetwork
    int expected = AddressFamiliy::InterNetwork;
    int actual = instance.getAddressFamiliy();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool Constractor_SocketTypeSpec()
{
    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    // Stream
    int expected = SocketType::Stream;
    int actual = instance.getSocketType();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool Constractor_ProtocolTypeSpec()
{
    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    // Ip
    int expected = ProtocolType::Ip;
    int actual = instance.getProtocolType();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool CreateSpec()
{
    char *hostName = (char *)A_ROOT_SERVER_NET;
    int portNumber = DNS_PORT;

    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);

    bool expected = 1;
    bool actual = instance.Id();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool ConnectSpec()
{
    char *hostName = (char *)A_ROOT_SERVER_NET;
    int portNumber = DNS_PORT;

    IpAddress ipAddress(hostName);
    IpEndPoint ipEndPoint(ipAddress, portNumber);

    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);

    SocketStatus expected = SocketStatus::Connected;
    SocketStatus actual = instance.Connect(ipEndPoint);

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool SendSpec()
{
    char *hostName = (char *);
    int portNumber = DNS_PORT;

    IpAddress ipAddress(hostName);
    IpEndPoint ipEndPoint(ipAddress, portNumber);

    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);

    char *message = (char *)"00000001";

    SocketStatus socketStatus = instance.Connect(ipEndPoint);

    int expected = SocketStatus::Connected;
    int actual = instance.Send(message);

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool ReceiveSpec()
{
    char *hostName = (char *)A_ROOT_SERVER_NET;
    int portNumber = DNS_PORT;

    IpAddress ipAddress(hostName);
    IpEndPoint ipEndPoint(ipAddress, portNumber);

    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);

    char *message = (char *)"00000001";

    SocketStatus socketStatus = instance.Connect(ipEndPoint);

    int sendStatus = instance.Send(message);

    bool expected = 0;
    bool actual = instance.Receive();

    // assert
    return CHECK(actual > expected, __FUNCTION__);
}

bool IdSpec()
{
    char *hostName = (char *)A_ROOT_SERVER_NET;
    int portNumber = DNS_PORT;

    IpAddress ipAddress(hostName);
    IpEndPoint ipEndPoint(ipAddress, portNumber);

    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);

    bool expected = 1;
    bool actual = instance.Id();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

int main()
{
    Constractor_AddressFamiliySpec();
    Constractor_SocketTypeSpec();
    Constractor_ProtocolTypeSpec();
    CreateSpec();
    ConnectSpec();
    SendSpec();
    ReceiveSpec();
    IdSpec();

    return 0;
}