#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter number : ";
    cin >> n ;
    int sum = 0 ;

    // // Method 1
    // int i = 1 ;
    // while(i<=n) {        
    //     sum += (i*i) ;
    //     i++;
    // }

    // Method 2 
    for(int i = 1 ; i <= n ; i++) {
        sum = sum+(i*i);
    }

    cout<<sum;
}