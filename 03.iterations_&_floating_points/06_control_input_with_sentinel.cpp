#include <iostream>
using namespace std;
int main()
{
    int n , count = 0 , sum = 0 ;
    cout<<"Enter positive integers : (Terminated on 0)\n";
    for(;;)
    {
        cout<<"\t"<<count+1<<" : ";
        cin>>n;
        if(n==0) break ;
        ++count;
        sum += n;
    }
    cout<<"The average of provided "<<count<<" numbers is "<<float(sum)/count<<endl;

}