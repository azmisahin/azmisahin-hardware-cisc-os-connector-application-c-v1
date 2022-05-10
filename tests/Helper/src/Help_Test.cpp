/**
 * @file Help_Test.h
 * @author Azmi ŞAHİN (azmisahin@outlook.com)
 * @brief module command helper
 * @version 0.1
 * @date 2022-05-04
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "../../../src/Helper/Help.h"
#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE IpAdressTest
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(Help_Suite)
BOOST_AUTO_TEST_CASE(Constractor)
{
    Help instance;

    Help actual = instance;

    BOOST_CHECK(actual);
}

BOOST_AUTO_TEST_CASE(DisplayString)
{
    char *_parameters = (char *)"1";
    Help instance;
    instance.Display(_parameters);
}

BOOST_AUTO_TEST_CASE(DisplayInt)
{
    int _parameters = 1;
    Help instance;
    instance.Display(_parameters);
}

BOOST_AUTO_TEST_CASE(Usage)
{
    Help instance;
    instance.Usage();
}

BOOST_AUTO_TEST_SUITE_END()