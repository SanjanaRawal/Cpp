#include <iostream>
using namespace std;
int main()
{
    int score;
    cout << "Enter test score : ";
    cin >> score;
    switch (score / 10)
    {
    case 10:
        cout << "O" << endl;
        break;
    case 9:
        cout << "A" << endl;
        break;
    case 8:
        cout << "B" << endl;
        break;
    case 7:
        cout << "C" << endl;
        break;
    case 6:
        cout << "D" << endl;
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "F" << endl;
        break;
    default:
        cout << "Score out of range!!!!" << endl;
    }
}