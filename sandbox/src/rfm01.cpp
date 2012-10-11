#include "rfm01.h"


using namespace std;

RFM01::RFM01(void)
{
    cout << "Constructed a new class\n";
    init();
    reset();
}

bool RFM01::waitForTx(int secondsToWait)
{
    time_t start, end;
    int timeDif;
    time(&start);
    cout << "Waiting for " << secondsToWait << "seconds\n";
    do
    {
        sleep(1);
        pressureSensor.readData();
        time(&end);
        timeDif = (int)difftime(end, start);
        cout << "Diff is " << timeDif << endl;
    }while( timeDif < secondsToWait);
    cout << "Finished waiting\n";
}

void RFM01::init(void)
{
}

void RFM01::reset(void)
{
}

bool RFM01::getData(WeatherData& data)
{
    data.setInsideTemp(2);
    return true;
}
