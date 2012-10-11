#include <iostream>

#include "weatherdata.h"

using namespace std;


WeatherData::WeatherData(void)
{
    insideTemp = 0;
    outsideTemp = 0;
    pressure = 0;
}
int WeatherData::getInsideTemp(void)
{
    return insideTemp;
}
void WeatherData::setInsideTemp(int t)
{
    insideTemp = t;
}

int WeatherData::getPressure(void)
{
    return pressure;
}
void WeatherData::setPressure(int p)
{
    pressure = p;
}


ostream& operator << (ostream& os, const WeatherData& d)
{
    os << "**********\n* Inside Temp ; Pressure " << endl <<
          "* " << d.insideTemp << "\t" << d.pressure << endl <<
          "**********\n";
    return os;
}

