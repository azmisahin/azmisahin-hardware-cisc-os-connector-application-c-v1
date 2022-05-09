/**
 * @file IpAddress_Test.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Represents a network endpoint as an IP address and a port number
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/IpAddress.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE IpAdressTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(IpAddressSuite)
BOOST_AUTO_TEST_CASE(ToString)
{
    char *_parameters = (char *)"1";
    IpAddress instance(_parameters);
    string expected = "";
    string actual = instance.ToString();

    BOOST_CHECK(actual != expected);
}
BOOST_AUTO_TEST_SUITE_END()