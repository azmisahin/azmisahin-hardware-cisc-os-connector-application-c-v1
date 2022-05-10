/**
 * @file IpAddress_Spec.cpp
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief Represents a network endpoint as an IP address and a port number
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Sockets/IpAddress.h"

bool ToStringSpec()
{
    char *_parameters = (char *)"1";
    IpAddress instance(_parameters);
    string expected = "";
    string actual = instance.ToString();
    return expected != actual;
}

int main()
{
    ToStringSpec();
    return 0;
}