#include <iostream>
#include <limits.h>
using namespace std;
int main() 
{
    short n = SHRT_MAX - 1 ;
    cout<<" n = "<<n<<endl ; 
    cout<<" n++ = "<<n++<<endl;
    cout<<" n = "<<n<<endl;
    cout<<" n++ = "<<n++<<endl;
    cout<<" n = "<<n<<endl; //-32768 instead of 32767+1 //is called overflow
    cout<<" n++ = "<<n++<<endl;
    cout<<" n = "<<n<<endl;
}