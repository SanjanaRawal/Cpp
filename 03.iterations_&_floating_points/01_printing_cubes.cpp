#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter positive integers : " ;
    cin>>n;
    int i=1;
    while(i<n) {
        cout<<i<<" cube is "<<i*i*i<<endl;
        i++;
    }
}