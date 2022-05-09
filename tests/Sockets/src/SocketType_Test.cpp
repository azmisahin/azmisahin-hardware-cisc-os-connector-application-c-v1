/**
 * @file SocketType_Test.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief communication type
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/SocketType.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE SocketTypeTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(SocketType_Suite)
BOOST_AUTO_TEST_CASE(Stream)
{
    int expected = 1;
    int actual = SocketType::Stream;

    BOOST_CHECK(actual != expected);
}

BOOST_AUTO_TEST_CASE(Datagram)
{
    int expected = 2;
    int actual = SocketType::Datagram;

    BOOST_CHECK(actual != expected);
}
BOOST_AUTO_TEST_SUITE_END()