/**
 * @file IpEndPoint_Spec.cpp
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Represents a network endpoint as an IP address and a port number
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/IpEndPoint.h"
#include "../../TestTool.h"
bool IpEndPoint_constractorSpec()
{
    char *value = (char *)"1";
    IpAddress ipAddress(value);
    int portNumber = DNS_PORT;
    IpEndPoint instance(ipAddress, portNumber);

    // assert
    return CHECK(instance.PortNumber() == portNumber, __FUNCTION__);
}

bool IpEndPoint_AddressSpec_ShouldNotEqual()
{
    char *value = (char *)"1";
    IpAddress ipAddress(value);
    int portNumber = DNS_PORT;
    IpEndPoint instance(ipAddress, portNumber);
    string actual = instance.Address().ToString();
    string expected = ipAddress.ToString();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool IpEndPoint_AddressSpec_ShouldEqual()
{
    char *value = (char *)A_ROOT_SERVER_NET;
    IpAddress ipAddress(value);
    int portNumber = DNS_PORT;
    IpEndPoint instance(ipAddress, portNumber);
    string actual = instance.Address().ToString();
    string expected = ipAddress.ToString();

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

bool IpEndPoint_PortNumberSpec()
{
    char *value = (char *)"1";
    IpAddress ipAddress(value);
    int portNumber = DNS_PORT;
    IpEndPoint instance(ipAddress, portNumber);
    int actual = instance.PortNumber();
    int expected = portNumber;

    // assert
    return CHECK(actual == expected, __FUNCTION__);
}

int main()
{
    IpEndPoint_constractorSpec();
    IpEndPoint_AddressSpec_ShouldEqual();
    IpEndPoint_AddressSpec_ShouldNotEqual();
    IpEndPoint_PortNumberSpec();

    return 0;
}