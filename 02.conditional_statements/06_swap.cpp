#include <iostream>
using namespace std;
int main()
{
    int x , y ;
    cout<<"Enter two numbers : " ;
    cin>>x>>y;
    cout<<"Unswapped x , y : "<<x<<" "<<y<<endl;
    int temp = x ;
    x = y ; 
    y = temp ;
    cout<<"Swapped x , y : "<<x<<" "<<y<<endl ;
}