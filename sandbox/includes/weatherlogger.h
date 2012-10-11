#ifndef WEATHERLOGGER_H
#define WEATHERLOGGER_H

#include <iostream>
#include "rfm01.h"
#include "bmp085.h"
#include "dth11.h"

class WeatherLogger
{
public:
    WeatherLogger(void);
    void run(void);
    
private:
    RFM01*     rfm;
    BMP085*    pressureSensor;
    //DTH11*     humiditySensor;
};
#endif        //  #ifndef WEATHERLOGGER_H

