#include <iostream> //including header file

using namespace std;

int main()
{
    int num1 = 1, num2 = 1, n, a; // initialization
    cout << "This program generates 'n' first number of fibonacci series. " << endl
         << "Enter a natural number to begin: ";
    cin >> n;

    // checkinnng if input is a positive integer
    while (n < 1)
    {
        cout << "Input error. Please enter a natural number: ";
        cin >> n;
    }

    // Print first two numbers
    if (n >= 1)
        cout << num1 << " "; // First number
    if (n >= 2)
        cout << num2 << " "; // Second number

    // Loop to print the remaining of the Fibonacci sequence
    for (int i = 2; i < n; i++)
    {
        a = num1 + num2;
        cout << a << " ";
        num1 = num2;
        num2 = a;
    }

    return 0;
}
