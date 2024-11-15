// Question: Write a program that checks if a given number n is between 10 and 50, inclusive, using relational operators.
// Concepts: Relational operators with bounds
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number A: " << endl;
    cin >> a;

    (a > 10 && a < 50) ? cout<<a<<" is present between 10 to 50:" : cout<<a<< " Is not present in between 10 to 50:";

    return 0;
}
