#include <iostream>

#include "weatherdata.h"

using namespace std;


WeatherData::WeatherData(void)
{
    insideTemp = 0;
    outsideTemp = 0;
}
int WeatherData::getInsideTemp(void)
{
    return insideTemp;
}
void WeatherData::setInsideTemp(int t)
{
    insideTemp = t;
}


ostream& operator << (ostream& os, const WeatherData& d)
{
    os << "\n\tInside Temp " << d.insideTemp << endl;
    return os;
}

