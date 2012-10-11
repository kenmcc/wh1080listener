#ifndef RFM01_H
#define RFM01_H

#include <iostream>
#include <ctime>

#include "bmp085.h"
#include "weatherdata.h"

#include "rfm01_access.h"

class RFM01
{
public:
    RFM01(void);
    bool waitForTx(int secondsToWait);
    bool getData(WeatherData& data);
    void reset(void);
    
private:
    void initI2c(void);    
    void init(void);
    
};
#endif        //  #ifndef RFM01_H

