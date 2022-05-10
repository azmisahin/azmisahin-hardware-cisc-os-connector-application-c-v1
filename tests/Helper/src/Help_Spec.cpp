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

bool ConstractorSpec()
{
    Help instance;
    return true;
}

bool DisplayStringSpec()
{
    char *_parameters = (char *)"1";
    Help instance;
    instance.Display(_parameters);
    return true;
}

bool DisplayIntSpec()
{
    int _parameters = 1;
    Help instance;
    instance.Display(_parameters);
    return true;
}

bool UsageSpec()
{
    Help instance;
    instance.Usage();
    return true;
}

int main()
{
    ConstractorSpec();
    DisplayStringSpec();
    DisplayIntSpec();
    UsageSpec();
    return 0;
}
