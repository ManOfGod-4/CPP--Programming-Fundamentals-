#include <iostream>
using namespace std;

int main()
{
    int num1, num2, lcm;

    cout << "This program calculates the LCM of any two natural numbers.\n\n";

    // this prompts the user to enter the 1st number
    cout << "Enter the 1st natural number: ";
    cin >> num1;
    while (num1 <= 0)
    {
        cout << "\nYour entered number is not a natural number. \nKindly re-enter:";
        cin >> num1;
    }

    // this prompts the user to enter a second number
    cout << "Enter the 2nd natural number: ";
    cin >> num2;

    while (num2 <= 0)
    {
        cout << "\nYour entered number is not a natural number. \nKindly re-enter:";
        cin >> num2;
    }

    // calculating LCM here
    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            lcm = i;
    }

    // LCM formula
    lcm = (num1 * num2) / lcm;

    // printing the LCM
    cout << "LCM of " << num1 << " and " << num2 << " is " << lcm;

    return 0;
}