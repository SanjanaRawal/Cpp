#include <iostream>
using namespace std;
int x = 11;
int main()
{
    int x = 22 ; 
    {
        int x = 33 ;
        cout<<"In a block in main() x = "<<x<<endl;
    }
    cout<<"In main() x = "<<x<<endl;
    cout<<"In main() ::x = "<<::x<<" is a global variable";
}