#include <iostream>
using namespace std;
int main() 
{
    int x , y , z ;
    cout<<"Enter three numbers : ";
    cin>>x>>y>>z;

    // //Method one 
    // int max = z ;
    // if(max < x) max = x ;
    // if(max < y) max = y ;
    // cout<<max<<" is maximum out of all."<<endl;

    // //Method two
    // if(x>=y && x>=z) cout<<x<<" is largest.";
    // if(y>=x && y>=z) cout<<y<<" is largest.";
    // if(z>=x && z>=y) cout<<z<<" is largest.";

    //Method three
    if(x > y) {
        if(x > z) cout<<x<<" is largest.";
        else cout<<z<<" is largest.";
    }
    else {
        if(y > z) cout<<y<<" is largest.";
        else cout<<z<<" is largest.";
    }
}