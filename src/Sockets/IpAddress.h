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
 *
 * @param value char
 */
IpAddress::IpAddress(char *value)
{
    _number = value;
}

/**
 * @brief Destroy the Ip Address:: Ip Address object
 *
 */
IpAddress::~IpAddress()
{
}
#endif
string IpAddress::ToString(){
    return _number;
}