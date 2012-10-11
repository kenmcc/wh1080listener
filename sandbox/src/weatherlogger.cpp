#include "weatherlogger.h"
#include "weatherdata.h"

WeatherLogger::WeatherLogger(void)
{
    rfm = new RFM01();
}

void WeatherLogger::run(void)
{
    WeatherData data;
    cout << "Before " << data;
    //while(1)
    {
        // get the data from the RFM.
        if(rfm->getData(data) != false)
        {
            cout << "got the data : " << data << endl;
            // get the pressure data
            
            // get the humidity data
        }
    }
}
