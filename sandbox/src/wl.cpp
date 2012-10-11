#include <iostream>



using namespace std;







class data
{
public:
    friend ostream& operator << (ostream& os, const data& d);
};

ostream& operator << (ostream& os, const data& d)
{
    os << "Hello world";
    return os;
}


