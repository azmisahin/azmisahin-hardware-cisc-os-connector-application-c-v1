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
    assert(&help != NULL);

    cout << "\n💯  All assert passed!" << endl;
    return 0;
}