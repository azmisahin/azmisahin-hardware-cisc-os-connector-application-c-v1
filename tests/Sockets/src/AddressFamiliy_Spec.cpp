/**
 * @file AddressFamiliy_Spec.cpp
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Represents a network endpoint as an IP address and a port number
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/AddressFamiliy.h"

bool UnixSpec()
{
    int expected = 1;
    int actual = AddressFamiliy::Unix;
    return true;
}

bool InterNetworkSpec()
{
    int expected = 2;
    int actual = AddressFamiliy::InterNetwork;
    return true;
}

int main()
{
    UnixSpec();
    InterNetworkSpec();
    return 0;
}