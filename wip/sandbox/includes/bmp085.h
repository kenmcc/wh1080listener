#ifndef BMP085_H
#define BMP085_H

#include "weatherdata.h"



class BMP085
{
public:
    BMP085(void);
    bool getData(WeatherData& data);
    
private:
    int lastRecordedPressure;
    int lastRecordedTemp;
    int getPressure(void);
    int getTemperature(void);
    
};
#endif        //  #ifndef BMP085_H

