#include <iostream>
using namespace std;

int factorial(int);
bool isStrongNum(int);

int main()
{
    int input;
    char choice;

    do
    {
        cout << "Please enter a number: ";
        cin >> input;

        if (isStrongNum(input))
        {
            cout << "Given number " << input << " is a strong number." << endl;
        }
        else
        {
            cout << "Given number " << input << " is not a strong number." << endl;
        }

        cout << "Enter 'y' to continue or 'q' to quit: ";
        cin >> choice;

    } while (choice == 'y');

    return 0;
}

int factorial(int x)
{
    int product = 1;
    for (int i = 1; i <= x; i++)
    {
        product *= i;
    }
    return product;
}

bool isStrongNum(int num)
{
    int sum = 0;
    int temp = num;

    while (temp > 0)
    {
        int rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }

    return (sum == num);
}
