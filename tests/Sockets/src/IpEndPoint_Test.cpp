/**
 * @file IpEndPoint_Test.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Represents a network endpoint as an IP address and a port number
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "../../../src/Sockets/IpEndPoint.h"
#include "../../../src/Sockets/IpAddress.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE IpAdressTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(IpEndPoint_Test)
BOOST_AUTO_TEST_CASE(IpEndPoint_constractor)
{
    IpAddress ipAddress = (char *)"1";
    int portNumber = 500001;
    IpEndPoint instance(ipAddress, portNumber);

    BOOST_CHECK(instance);
}
BOOST_AUTO_TEST_CASE(IpEndPoint_Address)
{
    IpAddress ipAddress = (char *)"1";
    int portNumber = 500001;
    IpEndPoint instance(ipAddress, portNumber);
    string actual = instance.Address().ToString();
    string expected = ipAddress.ToString();

    BOOST_CHECK(actual == expected);
}
BOOST_AUTO_TEST_CASE(IpEndPoint_PortNumber)
{
    IpAddress ipAddress = (char *)"1";
    int portNumber = 500001;
    IpEndPoint instance(ipAddress, portNumber);
    int actual = instance.PortNumber();
    int expected = portNumber;

    BOOST_CHECK(actual == expected);
}
BOOST_AUTO_TEST_SUITE_END()