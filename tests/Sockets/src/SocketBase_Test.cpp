/**
 * @file SocketBase_Test.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief managed interface for network access.
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/SocketBase.h"
#include "../../../src/Sockets/IpAddress.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE SocketBaseTest
#include <boost/test/unit_test.hpp>

// define test environment
char *REMOTE_IP_ADDRESS = A_ROOT_SERVER_NET;
int REMOTE_PORT = strtol(DNS_PORT, NULL, 10);

BOOST_AUTO_TEST_SUITE(SocketBase_Suit)
BOOST_AUTO_TEST_CASE(Constractor_AddressFamiliy)
{
    SocketBase instance(2, 1, 0);
    // InterNetwork
    int expected = 2;
    int actual = instance.AddressFamiliy();

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Constractor_SocketType)
{
    SocketBase instance(2, 1, 0);
    // Stream
    int expected = 1;
    int actual = instance.SocketType();

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Constractor_ProtocolType)
{
    SocketBase instance(2, 1, 0);
    // Ip
    int expected = 0;
    int actual = instance.ProtocolType();

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Connect)
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    SocketBase instance(2, 1, 0);

    bool expected = true;
    bool actual = instance.Connect(hostName, portNumber);

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Send)
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    SocketBase instance(2, 1, 0);

    char *message = "00000001";

    bool expected = 1;
    bool actual = instance.Send(message);

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Receive)
{
    char *hostName = REMOTE_IP_ADDRESS;
    int portNumber = REMOTE_PORT;

    SocketBase instance(2, 1, 0);

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

    SocketBase instance(2, 1, 0);

    bool expected = 1;
    bool actual = instance.Id();

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_SUITE_END()