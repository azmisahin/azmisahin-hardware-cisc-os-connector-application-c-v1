/**
 * @file Help.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief main module command helper header
 * @version 0.1
 * @date 2022-05-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef HELP_H
#define HELP_H
/**
 * module dependencies
 */
#include <string>
using namespace std;

class Help
{
private:
    /* data */
public:
    Help(/* args */);
    void Display(string value);
    void Display(int value);
    string Welcome();
    ~Help();
};

Help::Help(/* args */)
{
}

Help::~Help()
{
}

#endif