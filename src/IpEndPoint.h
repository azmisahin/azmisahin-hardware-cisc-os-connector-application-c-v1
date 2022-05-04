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
#include <string>
using namespace std;

/**
 * @brief Represents a network endpoint as an IP address and a port number
 *
 */
class IpEndPoint
{
private:
    /* data */
public:
    /**
     * @brief
     *
     */
    IpEndPoint(/* args */);

    /**
     * @brief Remote server name or address
     *
     */
    string HostName;

    /**
     * @brief Remote server port
     *
     */
    string PortNumber;
    /**
     * @brief Destroy the Ip End Point object
     *
     */
    ~IpEndPoint();
};

/**
 * @brief
 *
 */
IpEndPoint::IpEndPoint(/* args */)
{
}

/**
 * @brief Destroy the Ip End Point:: Ip End Point object
 *
 */
IpEndPoint::~IpEndPoint()
{
}

#endif