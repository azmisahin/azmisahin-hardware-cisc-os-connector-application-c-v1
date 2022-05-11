/**
 * @file IpEndPoint.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Represents a network endpoint as an IP address and a port number
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef IPENDPOINT_H
#define IPENDPOINT_H

/**
 * module dependencies
 */
#include "IpAddress.h"

/**
 * @brief Represents a network endpoint as an IP address and a port number
 *
 */
class IpEndPoint
{
private:
    IpAddress _ipAddress;
    int _portNumber;

public:
    /**
     * @brief
     */
    IpEndPoint();
    /**
     * @brief
     *
     */
    IpEndPoint(IpAddress ipAddress, int portNumber);

    /**
     * @brief Destroy the Ip End Point object
     *
     */
    ~IpEndPoint();

    /**
     * @brief Ip Address
     *
     */
    IpAddress Address();

    /**
     * @brief Port Number
     *
     */
    int PortNumber();
};

/**
 * @brief
 */
IpEndPoint::IpEndPoint()
{
}

/**
 * @brief
 *
 */
IpEndPoint::IpEndPoint(IpAddress ipAddress, int portNumber)
{
    _ipAddress = ipAddress;
    _portNumber = portNumber;
}

/**
 * @brief Destroy the Ip End Point:: Ip End Point object
 *
 */
IpEndPoint::~IpEndPoint()
{
}
#endif

IpAddress IpEndPoint::Address()
{
    return _ipAddress;
}

int IpEndPoint::PortNumber()
{
    return _portNumber;
}