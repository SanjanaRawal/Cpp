#include <iostream>
using namespace std ;
int main() 
{
    int fact = 1 ; 
    int i ;
    cout<<"Enter number to show factorial : ";
    cin>>i;
    int num=i ;
    while(i>0) {
        fact = fact * i ;
        i--;
    }
    cout<<num<<" Factoial = "<<fact;
}