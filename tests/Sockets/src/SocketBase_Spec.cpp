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
#include "../../TestTool.h"
#define IP "192.168.1.11"
#define PORT 50001
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
    char *hostName = (char *)IP;
    int portNumber = PORT;

    bool expected = 1;
    bool actual = instance.Id();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool ConnectSpec()
{
    SocketBase instance(2, 1, 0);

    char *hostName = (char *)IP;
    int portNumber = PORT;

    SocketStatus expected = SocketStatus::Connected;
    SocketStatus actual = instance.Connect(hostName, portNumber);

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool SendSpec()
{
    SocketBase instance(2, 1, 0);
    char *hostName = (char *)IP;
    int portNumber = PORT;

    char *message = (char *)"00000001";

    instance.Connect(hostName, portNumber);

    bool expected = 1;
    bool actual = instance.Send(message);

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool DownSpec()
{
    SocketBase instance(2, 1, 0);
    char *hostName = (char *)IP;
    int portNumber = PORT;

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
    SocketBase instance(2, 1, 0);
    char *hostName = (char *)IP;
    int portNumber = PORT;

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
    SocketBase instance(2, 1, 0);
    char *hostName = (char *)"127.0.0.1";
    int portNumber = 500001;

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