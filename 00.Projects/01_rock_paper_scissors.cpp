#include <iostream>
using namespace std;

enum choice { rock = 0, paper = 1, scissors = 2 };
enum result { player1, player2, tie };

int main() {
    int n;
    choice choice1, choice2;
    result res;

    cout << "Enter your choice:\n";
    cout << "Use 0 for rock\n1 for paper\n2 for scissors\n";

    cout << "Player one: ";
    cin >> n;

    if (n < 0 || n > 2) cout <<"Invalid choice\n";
    choice1 = static_cast<choice>(n);

    cout << "Player two: ";
    cin >> n;
    if (n < 0 || n > 2) cout << "Invalid choice\n";
    choice2 = static_cast<choice>(n);

    if (choice1 == choice2) res = tie;
    else if (choice1 == rock) res = (choice2 == paper) ? player2 : player1;
    else if (choice1 == paper) res = (choice2 == rock) ? player1 : player2;
    else res = (choice2 == rock) ? player2 : player1; // choice1 == scissors

    if (res == tie) cout << "\nIt's a tie.\n";
    else if (res == player1) cout << "\nPlayer one wins.\n";
    else cout << "\nPlayer two wins.\n";
}
