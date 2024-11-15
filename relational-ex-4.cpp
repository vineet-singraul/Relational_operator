

// Question: Write a program to determine whether two numbers x and y are equal or not without using the equality (==) operator.
// Concepts: Relational Operators, Logical Operators
#include <iostream>
using namespace std;

int main()
{
    // Declare two numbers x and y
    int x, y;
    
    // Input the two numbers
    cout << "Enter the first number (x): ";
    cin >> x;
    
    cout << "Enter the second number (y): ";
    cin >> y;

    // Check if x and y are equal without using the == operator
    !(x > y) && !(x < y) ? cout << "Equal" : cout << "Not Equal";

    return 0;
}



