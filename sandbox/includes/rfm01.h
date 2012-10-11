#ifndef RFM01_H
#define RFM01_H

#include <iostream>
#include <ctime>

#include "bmp085.h"
#include "weatherdata.h"

class RFM01
{
public:
    RFM01(void);
    bool waitForTx(int secondsToWait);
    bool getData(WeatherData& data);
    
private:
    void initI2c(void);    
    BMP085 pressureSensor;
    void init(void);
    void reset(void);
};
#endif        //  #ifndef RFM01_H

