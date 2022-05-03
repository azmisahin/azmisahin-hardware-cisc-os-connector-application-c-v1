/**
 * @file Help.cpp
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief main module command helper
 * @version 0.1
 * @date 2022-05-02
 *
 * @copyright Copyright (c) 2022
 *
 */

/**
 * module dependencies
 */
#include "Help.h"
#include <iostream>
using namespace std;

void Help::Display(string value)
{
    cout << value << endl;
}

void Help::Display(int value)
{
    cout << value << endl;
}

string Help::Welcome()
{
    return "\n\
Usage\n\
\n\
    connector <HostName> <PortNumber>\n\
\n\
You can access an active remote server and its port.\n\
\n\
Run 'connector --help' for more information.\n\
";
}

Parameter Help::GetParameter(char const *argv[])
{
    Parameter params;
    params.HostName = argv[1];
    params.PortNumber = argv[2];
    return params;
}