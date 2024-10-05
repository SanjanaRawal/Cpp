#include <iostream>
using namespace std;

enum Semester{fall , spring , summer};
int main()
{
    Semester s1 , s2;
    s1 = spring ;
    s2 = fall ;
    if(s1 == s2) cout<<"Same semester \n";
    else cout<<"Different semester \n";
}