#include <iostream>
using namespace std;
int main()
{
    int n ;
    for(;;)
    {
        cout<<"Enter int : ";
        cin>>n;
        if(n%2==0) continue ;
        else if(n%3==0) break;
        cout<<"\t Bottom of loop \n";
    }
    cout<<" \tOutside loop";
}