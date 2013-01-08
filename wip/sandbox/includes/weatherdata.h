#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <iostream>
using namespace std;

class WeatherData
{
public:    
    WeatherData(void);
    int getInsideTemp(void);
    void setInsideTemp(int);
    
    int getPressure(void);
    void setPressure(int);
    friend ostream& operator << (ostream& os, const WeatherData& d);
    
private:
    int insideTemp, outsideTemp, pressure;    
};




#endif        //  #ifndef WEATHERDATA_H

