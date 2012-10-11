#include <iostream>

#include "bmp085.h"

using namespace std;

BMP085::BMP085(void)
{
    lastRecordedPressure = 0;
    lastRecordedTemp = 0;
}

bool BMP085::readData(void)
{
    cout << "Reading data from BMP" <<endl;
    return false;
}
int BMP085::getPressure(void)
{
    return lastRecordedPressure;
}
int BMP085::getTemperature(void)
{
    return lastRecordedTemp;
}

