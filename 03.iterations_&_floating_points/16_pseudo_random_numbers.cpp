#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    for(int i = 0 ; i < 8 ; i++) 
    cout<<rand()<<endl;

    cout<<"RAND_MAX = "<<RAND_MAX<<endl;
}