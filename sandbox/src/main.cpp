#include <iostream>
#include <boost/program_options.hpp>
#include "weatherlogger.h"

namespace po = boost::program_options;


using namespace std;

typedef struct CommandLineArgs
{
    string logFile;
    string dataDir;
}CommandLineArgs;

CommandLineArgs setupAndParseCmdLine(int a, char** argv, CommandLineArgs& args)
{
    
    try
    {
    po::options_description desc("Required options");
        desc.add_options()
            ("data_dir,d", po::value<string>(&args.dataDir)->required(), "Data Directory")
            ("log_file,l", po::value<string>(&args.logFile),                          "Log File")

        ;

        if (a == 1 ) 
        {
            cout << "Usage : " << argv[0] <<endl<< desc << "\n";
            exit(0);
        }
        
        
        po::variables_map vm;        
        po::store(po::parse_command_line(a, argv, desc), vm);
        po::notify(vm);    

    }
    catch(exception& e) 
    {
        cerr << e.what() << "\n";
        exit(0);
    }
    return args;
}

int main(int a, char** argv)
{
    CommandLineArgs args;
    setupAndParseCmdLine(a, argv, args);
    cout << "Data Dir :" << args.dataDir << endl;
    cout << "LogFile : " << args.logFile << endl;
    
    WeatherLogger myWeatherLogger;
    myWeatherLogger.run();
    
    
    return 0;
}

