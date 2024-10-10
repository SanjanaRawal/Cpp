#include <iostream>
using namespace std;
int main()
{
    int a,b,c ;
    cin>>a>>b>>c ;
    for(int i = 0 ; i < a ; i++) {
        for(int j = 0 ; j < b ; j++) {
            for(int k=0 ; k < c ; k++) {
                if(i*j*k > 100) goto esc ;
                else cout<< i*j*k <<" ";
            }
        }
        esc: cout<<endl ;
    }
}