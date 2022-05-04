/**
 * @file connector.cpp
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief emulation of risc-based architectures with a cisc architecture.
 * @version 0.1
 * @date 2022-05-02
 *
 * @copyright Copyright (c) 2022
 */

/**
 * Module dependencies
 */
#include "Help.cpp"
#include "IpEndPoint.h"

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
    if (argc != 3)
    {
        help.Display(help.Welcome());
    }
    else
    {
        IpEndPoint parameter = help.GetParameter(argv);
    }
    return 0;
}