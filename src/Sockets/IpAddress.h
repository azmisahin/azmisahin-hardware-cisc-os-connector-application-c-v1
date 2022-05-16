/**
 * @file IpAddress.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Represents a network endpoint as an IP address and a port number
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef IPADDRESS_H
#define IPADDRESS_H

#include <cstdlib>
// make source codes suitable for devops production environment.
#define A_ROOT_SERVER_NET std::getenv("REMOTE_IP_ADDRESS")
#define DNS_PORT std::getenv("REMOTE_PORT")

/**
 * module dependencies
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Represents a network endpoint as an IP address
 *
 */
class IpAddress
{
private:
    char *_number;

public:
    /**
     * @brief
     */
    IpAddress();

    /**
     * @param value char
     */
    IpAddress(char *value);

    /**
     */
    ~IpAddress();

    /**
     * IpAddress To String
     * @return string
     */
    string ToString();

    /**
     * IpAddress To Char
     * @return char*
     */
    char *ToChar();
};

/**
 * @brief
 */
IpAddress::IpAddress()
{
}

/**
 * @brief
 *
 * @param value char
 */
IpAddress::IpAddress(char *value)
{
    // define ip address octet
    unsigned int octet[4];

    // split address octet
    sscanf(value, "%u.%u.%u.%u", &octet[0], &octet[1], &octet[2], &octet[3]);

    // convert integer
    unsigned int number =
        1u * octet[0] << 24 | 1u * octet[1] << 16 | 1u * octet[2] << 8 | octet[3];

    // define string
    char *result = new char[4];

    // transform string
    sprintf(result, "%d.%d.%d.%d",
            (number >> 24) & 0xFF,
            (number >> 16) & 0xFF,
            (number >> 8) & 0xFF,
            (number)&0xFF);

    // set internal number
    _number = result;
}

/**
 * @brief Destroy the Ip Address:: Ip Address object
 *
 */
IpAddress::~IpAddress()
{
}
#endif
string IpAddress::ToString()
{
    return _number;
}
char *IpAddress::ToChar()
{
    return _number;
}