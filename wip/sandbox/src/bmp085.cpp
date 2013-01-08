#include <iostream>

#include "bmp085.h"

using namespace std;

BMP085::BMP085(void)
{
    lastRecordedPressure = 0;
    lastRecordedTemp = 0;
}

bool BMP085::getData(WeatherData& data)
{
    cout << "Reading data from BMP" <<endl;
    data.setPressure(1012);
    data.setInsideTemp(20);
    return true;
}

