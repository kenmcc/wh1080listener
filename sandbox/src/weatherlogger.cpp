#include "weatherlogger.h"
#include "weatherdata.h"

#define IDLETIME (45)


WeatherLogger::WeatherLogger(void)
{
    rfm = new RFM01();
    pressureSensor = new BMP085();
}

void WeatherLogger::run(void)
{
    WeatherData data;
    time_t timeOfLastReading, now;
    float diff;
           
    while(1)
    {
        // get the data from the RFM.
        if(rfm->getData(data) != false)
        {
            time(&timeOfLastReading);
            // get the pressure data
            pressureSensor->getData(data);
            
            // get the humidity data
            //humiditySensor -> getdata(data);
            
            cout << data << endl;
            
            /* when the rfm gets a reading, we have 48 seconds before the next one
               but we don't want to be late to the table 
            */
            
            time(&now);
            diff = (IDLETIME) - difftime(now, timeOfLastReading);
            cout << "Sleeping for " << diff << " seconds before listening for next tx" <<endl;
            sleep((int)diff);
        }
        else
        {
            rfm->reset();
        }
    }
}
