#include <iostream>
using namespace std;
int main() 
{
    int num1 , num2 ;
    cout<<"Enter two positive integers : ";
    cin>>num1 ;
    cin>>num2;
    if(num2>0 && num1%num2 == 0) 
    cout<<num1<<" is divisible by "<<num2;
    else 
    cout<<num1<<" isn't divisible by "<<num2;
}