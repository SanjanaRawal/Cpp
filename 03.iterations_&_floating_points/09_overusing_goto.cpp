#include <iostream>
using namespace std ; 
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    s1: cout<<"Now at step 1 with n = "<<n<<endl;
    --n;
    if(n<2) return 0 ;
    s2: cout<<"Now at step 2 with n = "<<n<<endl;
    if(n<7) goto s4;
    s3: cout<<"Now at step 3 with n = "<<n<<endl;
    if(n%2==0) goto s1;
    s4: cout<<"Now at step 1 with n = "<<n<<endl;
    n -= 2;
    if(n>4) goto s1;
    else goto s3;
}