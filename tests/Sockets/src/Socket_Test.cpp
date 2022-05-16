/**
 * @file Socket_Test.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief managed interface for network access.
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/Socket.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE SocketTest
#include <boost/test/unit_test.hpp>

// define test environment
char *REMOTE_IP_ADDRESS = A_ROOT_SERVER_NET;
int REMOTE_PORT = strtol(DNS_PORT, NULL, 10);

BOOST_AUTO_TEST_SUITE(Socket_Suite)
BOOST_AUTO_TEST_CASE(Constractor_AddressFamiliy)
{
    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    AddressFamiliy expected = AddressFamiliy::InterNetwork;
    AddressFamiliy actual = instance.AddressFamiliy();

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Constractor_SocketType)
{
    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    SocketType expected = SocketType::Stream;
    SocketType actual = instance.SocketType();

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Constractor_ProtocolType)
{
    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    ProtocolType expected = ProtocolType::Ip;
    ProtocolType actual = instance.ProtocolType();

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Connect)
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    IpEndPoint ipEndPoint(hostName, portNumber);
    bool expected = true;
    bool actual = instance.Connect(ipEndPoint);

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Send)
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    IpEndPoint ipEndPoint(hostName, portNumber);
    char *message = "00000001";
    bool expected = 1;
    bool actual = instance.Send(message);

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Receive)
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    IpEndPoint ipEndPoint(hostName, portNumber);
    char *message = "00000001";
    instance.Send(message);
    bool expected = 1;
    bool actual = instance.Receive();

    BOOST_CHECK(actual == expected);
    BOOST_CHECK("" != instance.Data());
}

BOOST_AUTO_TEST_CASE(Id)
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    Socket instance(AddressFamiliy::InterNetwork, SocketType::Stream, ProtocolType::Ip);
    IpEndPoint ipEndPoint(hostName, portNumber);

    bool expected = 1;
    bool actual = instance.Id();

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_SUITE_END()