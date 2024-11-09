#include <iostream>
#include <cmath>
using namespace std;

// Function declarations
double add(int x, int y);
double subtract(int x, int y);
double multiply(int x, int y);
double divide(int x, int y);
double remainder(int x, int y);
double exponent(int x, int y);

int main()
{
    char choice;
    int num1 = 0, num2 = 0;

    do
    {
        // Display the menu
        cout << "First Number = " << num1 << ", "
             << "Second Number = " << num2 << endl
             << "n - Enter new numbers\n"
             << "a - Addition\n"
             << "s - Subtraction\n"
             << "m - Multiplication\n"
             << "d - Division\n"
             << "r - Remainder\n"
             << "e - Exponentiation\n"
             << "x - Exit program" << endl;

        cout << "\nSelect an option: ";
        cin >> choice;

        // Check if the user is trying to perform a calculation without entering valid numbers
        if ((choice == 'a' || choice == 's' || choice == 'm' ||
             choice == 'd' || choice == 'r' || choice == 'e') &&
            (num1 == 0 && num2 == 0))
        {
            cout << "Please enter two numbers first." << endl;
            cout << "Enter number 1: ";
            cin >> num1;
            cout << "Enter number 2: ";
            cin >> num2;
            continue; // Restart the loop to display the menu again
        }

        // Perform calculations based on the user's choice
        switch (choice)
        {
        case 'n':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            break;
        case 'a':
            cout << "The sum of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
            break;
        case 's':
            cout << "The difference of " << num1 << " and " << num2 << " is " << subtract(num1, num2) << endl;
            break;
        case 'm':
            cout << "The product of " << num1 << " and " << num2 << " is " << multiply(num1, num2) << endl;
            break;
        case 'd':
            if (num2 != 0)
                cout << "The quotient of " << num1 << " and " << num2 << " is " << divide(num1, num2) << endl;
            else
                cout << "Error: Division by zero is undefined." << endl;
            break;
        case 'r':
            if (num2 != 0)
                cout << "The remainder of " << num1 << " divided by " << num2 << " is " << remainder(num1, num2) << endl;
            else
                cout << "Error: Division by zero is undefined." << endl;
            break;
        case 'e':
            cout << "The answer is " << exponent(num1, num2) << endl;
            break;
        case 'x':
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 'x'); // Continue until user chooses to exit
}

// Function definitions
double add(int x, int y)
{
    return x + y;
}

double subtract(int x, int y)
{
    return x - y;
}

double multiply(int x, int y)
{
    return x * y;
}

double divide(int x, int y)
{
    return static_cast<double>(x) / y; // Return a double for division
}

double remainder(int x, int y)
{
    return x % y;
}

double exponent(int x, int y)
{
    return pow(x, y);
}
