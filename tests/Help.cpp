/**
 * @file Help.test.cpp
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief emulation of risc-based architectures with a cisc architecture.
 * @version 0.1
 * @date 2022-05-02
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * Module dependencies
 */
#include <iostream>
#include <assert.h>
using namespace std;

/**
 * @brief Test dependencies
 */
#include "../src/Help.cpp"

/**
 * @brief Connector test
 *
 * @param argc argument count
 * @param argv arguments
 * @return int
 */
int main(int argc, char const *argv[])
{
    Help help;
    // should be initalize
    assert(&help != NULL);

    char const *params[2] = {"1", "2"};
    Parameter parameter = help.GetParameter(params);
    // the first parameter should be to hostname
    assert(parameter.HostName == params[1]);
    // the second parameter should be the port number
    assert(parameter.PortNumber == params[2]);

    cout << "\n💯  All assert passed!" << endl;
    return 0;
}