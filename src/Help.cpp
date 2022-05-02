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
    Connector hostName port\n\
    \n\
    -- example : \n\
    \n\
    Connector 127.0.0.1 50001\n\
    ";
}