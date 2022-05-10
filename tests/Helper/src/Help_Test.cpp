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
#include "Help_Spec.cpp"

BOOST_AUTO_TEST_SUITE(Help_Suite)
BOOST_AUTO_TEST_CASE(Constractor)
{
    bool actual = ConstractorSpec();
    BOOST_CHECK(actual);
}

BOOST_AUTO_TEST_CASE(DisplayString)
{
    bool actual = DisplayStringSpec();
    BOOST_CHECK(actual);
}

BOOST_AUTO_TEST_CASE(DisplayInt)
{
    bool actual = DisplayIntSpec();
    BOOST_CHECK(actual);
}

BOOST_AUTO_TEST_CASE(Usage)
{
    bool actual = UsageSpec();
    BOOST_CHECK(actual);
}

BOOST_AUTO_TEST_SUITE_END()