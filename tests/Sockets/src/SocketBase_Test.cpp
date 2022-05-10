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
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE SocketBaseTest
#include <boost/test/unit_test.hpp>

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
    SocketBase instance(2, 1, 0);

    char *hostName = "127.0.0.1";
    int portNumber = 500001;

    bool expected = true;
    bool actual = instance.Connect(hostName, portNumber);

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Send)
{
    SocketBase instance(2, 1, 0);
    char *hostName = "127.0.0.1";
    int portNumber = 500001;

    char *message = "00000001";

    bool expected = 1;
    bool actual = instance.Send(message);

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_CASE(Receive)
{
    SocketBase instance(2, 1, 0);
    char *hostName = "127.0.0.1";
    int portNumber = 500001;

    char *message = "00000001";
    instance.Send(message);

    bool expected = 1;
    bool actual = instance.Receive();

    BOOST_CHECK(actual == expected);
    BOOST_CHECK("" != instance.Data());
}

BOOST_AUTO_TEST_CASE(Id)
{
    SocketBase instance(2, 1, 0);
    char *hostName = "127.0.0.1";
    int portNumber = 500001;

    bool expected = 1;
    bool actual = instance.Id();

    BOOST_CHECK(actual == expected);
}

BOOST_AUTO_TEST_SUITE_END()