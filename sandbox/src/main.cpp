#include <iostream>
#include <boost/program_options.hpp>
#include "weatherlogger.h"

namespace po = boost::program_options;


using namespace std;

int setupAndParseCmdLine(int a, char** argv)
{
    try
    {
    po::options_description desc("Allowed options");
        desc.add_options()
            ("L", po::value<string>(), "Set Log File")
            ("D", po::value<string>(), "Data Directory")
        ;

        po::variables_map vm;        
        po::store(po::parse_command_line(a, argv, desc), vm);
        po::notify(vm);    

        if (a == 1) {
            cout << desc << "\n";
            exit(0);
        }
        
        if(vm.count("L"))
        {
            cout << "Logfile : " << vm["L"].as<string>() << ".\n";
        }
        
        
    }
    catch(exception& e) 
    {
        cerr << e.what() << "\n";
        exit(0);
    }
    return 0;
}

int main(int a, char** argv)
{
    setupAndParseCmdLine(a, argv);
    
    WeatherLogger myWeatherLogger;
    myWeatherLogger.run();
    
    
    return 0;
}

