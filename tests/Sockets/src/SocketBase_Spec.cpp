/**
 * @file SocketBase_Spec.cpp
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief managed interface for network access
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/SocketBase.h"
#include "../../../src/Sockets/IpAddress.h"
#include "../../TestTool.h"

// define test environment
char *REMOTE_IP_ADDRESS = A_ROOT_SERVER_NET;
int REMOTE_PORT = strtol(DNS_PORT, NULL, 10);

bool Constractor_AddressFamiliySpec()
{
    SocketBase instance(2, 1, 0);
    // InterNetwork
    int expected = 2;
    int actual = instance.AddressFamiliy();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool Constractor_SocketTypeSpec()
{
    SocketBase instance(2, 1, 0);
    // Stream
    int expected = 1;
    int actual = instance.SocketType();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool Constractor_ProtocolTypeSpec()
{
    SocketBase instance(2, 1, 0);
    // Ip
    int expected = 0;
    int actual = instance.ProtocolType();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool CreateSpec()
{
    SocketBase instance(2, 1, 0);

    bool expected = 1;
    bool actual = instance.Id();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool ConnectSpec()
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    SocketBase instance(2, 1, 0);

    SocketStatus expected = SocketStatus::Connected;
    SocketStatus actual = instance.Connect(hostName, portNumber);

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool SendSpec()
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    SocketBase instance(2, 1, 0);

    char *message = (char *)"00000001";

    instance.Connect(hostName, portNumber);

    bool expected = 1;
    bool actual = instance.Send(message);

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool DownSpec()
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    SocketBase instance(2, 1, 0);

    char *message = (char *)"00000001";

    instance.Connect(hostName, portNumber);
    instance.Send(message);

    bool expected = 0;
    bool actual = instance.Down(0);

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool ReceiveSpec()
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    SocketBase instance(2, 1, 0);

    char *message = (char *)"00000001";

    instance.Connect(hostName, portNumber);
    instance.Send(message);

    bool expected = 0;
    bool actual = instance.Receive();

    // assert
    return CHECK(actual > expected, __FUNCTION__);
}

bool IdSpec()
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    SocketBase instance(2, 1, 0);

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
    DownSpec();
    ReceiveSpec();
    IdSpec();

    return 0;
}