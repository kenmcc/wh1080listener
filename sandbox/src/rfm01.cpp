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
    cout << "HighPriority " <<endl;
    do
    {
        sleep(1);
        time(&end);
        timeDif = (int)difftime(end, start);
    }while( timeDif < secondsToWait);
   cout << "low Priority" << endl;
}

void RFM01::init(void)
{
}

void RFM01::reset(void)
{
}

bool RFM01::getData(WeatherData& data)
{
    waitForTx(10);
    data.setInsideTemp(2);
    return true;
}
