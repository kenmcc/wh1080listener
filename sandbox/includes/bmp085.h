#ifndef BMP085_H
#define BMP085_H



class BMP085
{
public:
    BMP085(void);
    bool readData(void);
    int getPressure(void);
    int getTemperature(void);
    
private:
    int lastRecordedPressure;
    int lastRecordedTemp;    
};
#endif        //  #ifndef BMP085_H

