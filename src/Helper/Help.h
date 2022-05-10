/**
 * @file Help.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief module command helper
 * @version 0.1
 * @date 2022-05-04
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

/**
 * @brief main module command helper.
 *
 */
class Help
{
private:
    /* data */
public:
    /**
     * @brief
     *
     */
    Help(/* args */);

    /**
     * @brief Destroy the Help object
     *
     */
    ~Help();

    /**
     * @brief Displays the string in the standard output stream.
     *
     * @param value string
     */
    void Display(string value);

    /**
     * @brief Displays numbers in the standard output stream.
     *
     * @param value int
     */
    void Display(int value);

    /**
     * @brief Displays the user assistant.
     *
     * @return string
     */
    string Usage();
};

Help::Help(/* args */)
{
}

Help::~Help()
{
}

#endif