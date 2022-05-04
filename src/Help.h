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
#include "IpEndPoint.h"
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
    string Welcome();

    /**
     * @brief Converts parameters to a network endpoint representation.
     *
     * @param argv
     * @return IpEndPoint
     */
    IpEndPoint GetParameter(char const *argv[]);

    /**
     * @brief Destroy the Help object
     *
     */
    ~Help();
};

/**
 * @brief 
 * 
 */
Help::Help(/* args */)
{
}

/**
 * @brief Destroy the Help:: Help object
 * 
 */
Help::~Help()
{
}

#endif