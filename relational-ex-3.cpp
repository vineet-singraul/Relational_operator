// Question: Write a program that checks if a number is even or odd using relational operators and prints "even" or "odd" accordingly.
// Concepts: Modulus, Relational Operators
#include <iostream>
using namespace std;

int main()
{
    // Relational operators
    char a;
    cout << "Enter the number A: " << endl;
    cin >> a;
 

    (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || 
     a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') 
        ? cout << "Vowel" : cout << "Consonant";
    return 0;
}
