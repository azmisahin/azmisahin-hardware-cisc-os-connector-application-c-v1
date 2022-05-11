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
    unsigned char octet[4];

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