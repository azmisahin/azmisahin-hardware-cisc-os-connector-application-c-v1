#ifndef PARAMETER_H
#define PARAMETER_H
/**
 * module dependencies
 */
#include <string>
using namespace std;

class Parameter
{
private:
    /* data */
public:
    Parameter(/* args */);
    string HostName;
    string PortNumber;
    ~Parameter();
};

Parameter::Parameter(/* args */)
{
}

Parameter::~Parameter()
{
}

#endif