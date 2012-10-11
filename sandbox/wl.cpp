#include <iostream>
#include <ctime>

using namespace std;


class WH1080
{
public:
    WH1080(void);
    bool waitForTx(int secondsToWait);
    
private:
    void initI2c(void);    
};


WH1080::WH1080(void)
{
    cout << "Constructed a new class\n";
}

bool WH1080::waitForTx(int secondsToWait)
{
    time_t start, end;
    int timeDif;
    time(&start);
    cout << "Waiting for " << secondsToWait << "seconds\n";
    do
    {
        sleep(1);
        time(&end);
        timeDif = (int)difftime(end, start);
        cout << "Diff is " << timeDif << endl;
    }while( timeDif < secondsToWait);
    cout << "Finished waiting\n";
}


int main(int a, char** argv)
{
    cout << "Hello world\n";
    
    WH1080 myClass;
    myClass.waitForTx(10);
    
    return 0;
}
