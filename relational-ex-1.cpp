// Question: Write a program to compare three numbers and print the largest one using only relational operators (no if-else statements).
// Concepts: Relational operators

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    // Using relational operators and the ternary operator to find the largest
    int largest = (a > b && a > c) ? a : (b > c ? b : c);

    // Print the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}
