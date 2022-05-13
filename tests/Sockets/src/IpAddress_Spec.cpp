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
#include "../../TestTool.h"
bool ToStringSpec()
{
    char *_parameters = (char *)A_ROOT_SERVER_NET;
    IpAddress instance(_parameters);
    string expected = A_ROOT_SERVER_NET;
    string actual = instance.ToString();

    // assert
    return CHECK(expected == actual, __FUNCTION__);
}

bool ToStringSpec_ShouldNotEqual()
{
    char *_parameters = (char *)"1";
    IpAddress instance(_parameters);
    string expected = "";
    string actual = instance.ToString();

    // assert
    return CHECK(expected != actual, __FUNCTION__);
}

int main()
{
    ToStringSpec();
    ToStringSpec_ShouldNotEqual();
    return 0;
}