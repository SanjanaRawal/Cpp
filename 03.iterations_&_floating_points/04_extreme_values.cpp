#include <iostream>
using namespace std;
int main()
{
    int n , min , max ;
    cout<<"---INPUT TERMINATED ON ENTERING 0---\n";
    cout<<"Enter numbers : ";
    cin>>n;
    for(min=max=n ; n!=0 ; )
    {
        if(n<min) min = n ;
        else if(n>max) max = n ;
        cin>>n;
    }
    cout<<"Minimum number entered : "<<min<<endl;
    cout<<"Maximum number entered : "<<max<<endl;
}