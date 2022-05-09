/**
 * @file ProtocolType_Test.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Specifies the protocols that the Socket class supports.
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/ProtocolType.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE IpAdressTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(ProtocolType_Suite)
BOOST_AUTO_TEST_CASE(Ip)
{
    int expected = 0;
    int actual = ProtocolType::Ip;

    BOOST_CHECK(actual != expected);
}

BOOST_AUTO_TEST_CASE(Icmp)
{
    int expected = 1;
    int actual = ProtocolType::Icmp;

    BOOST_CHECK(actual != expected);
}

BOOST_AUTO_TEST_CASE(Igmp)
{
    int expected = 2;
    int actual = ProtocolType::Igmp;

    BOOST_CHECK(actual != expected);
}

BOOST_AUTO_TEST_CASE(Ggp)
{
    int expected = 3;
    int actual = ProtocolType::Ggp;

    BOOST_CHECK(actual != expected);
}

BOOST_AUTO_TEST_CASE(IpV4)
{
    int expected = 4;
    int actual = ProtocolType::IpV4;

    BOOST_CHECK(actual != expected);
}

BOOST_AUTO_TEST_SUITE_END()