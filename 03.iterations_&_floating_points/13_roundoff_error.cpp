//In a computer , even the smallest floating point value tend to be imprecise . This imprecision is called round off error

#include <iostream>
using namespace std;
int main()
{
    double x = 100/3.0 ;
    cout<<" x = "<<x<<endl;
    double y = x - 333.0 ;
    cout<<" y = "<<y<<endl;
    double z = 3*y - 1.0 ;
    cout<<" z = "<<z<<endl;
    if(z==0) cout<<"z==0 \n";
    else cout<<"z!=0";
}