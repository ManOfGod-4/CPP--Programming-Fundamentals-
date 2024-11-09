#include <iostream>
#include <cmath>
using namespace std;

double add(int, int);
double subtract(int x, int y);
double multiply(int x, int y);
double divide(int x, int y);
int remainder(int x, int y);
double exponent(int x, int y);

int main()
{
    char choice;
    int num1 = 0, num2 = 0;

    do
    {
        cout << "First Number =  " << num1 << ", "
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

        // Check if user is trying to perform calculations when both numbers are zero
        if (num1 == 0 && num2 == 0 && choice != 'n' && choice != 'x')
        {
            do
            {
                cout << "Please enter two numbers first:" << endl;
                cout << "Enter number 1: ";
                cin >> num1;
                cout << "Enter number 2: ";
                cin >> num2;
            } while (num1 == 0 & num2 == 0);
        }

        switch (choice)
        {
        case 'n':
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            cout << endl;
            break;
        case 'a':
            cout << add(num1, num2) << endl;
            break;
        case 's':
            cout << subtract(num1, num2) << endl;
            break;
        case 'm':
            cout << multiply(num1, num2) << endl;
            break;
        case 'd':
            if (num2 != 0)
                cout << divide(num1, num2) << endl;
            else
                cout << "Error: Division by zero is undefined." << endl;
            break;
        case 'r':
            if (num2 != 0)
                cout << remainder(num1, num2) << endl;
            else
                cout << "Error: Division by zero is undefined." << endl;
            break;
        case 'e':
            cout << exponent(num1, num2) << endl;
            break;
        case 'x':
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 'x');
}

double add(int x, int y)
{
    cout << "The sum of " << x << " and " << y << " is ";
    return x + y;
}

double subtract(int x, int y)
{
    cout << "The difference of " << x << " and " << y << " is ";
    return x - y;
}

double multiply(int x, int y)
{
    cout << "The product of " << x << " and " << y << " is ";
    return x * y;
}

double divide(int x, int y)
{
    cout << "The quotient of " << x << " and " << y << " is ";
    return static_cast<double>(x) / y;
}

int remainder(int x, int y)
{
    cout << "The remainder of " << x << " / " << y << " is ";
    return x % y;
}

double exponent(int x, int y)
{
    cout << "The answer is ";
    return pow(x, y);
}
