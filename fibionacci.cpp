#include <iostream> //including the header file

using namespace std;

int main()
{
    // taking nput from user
    int num1 = 0, num2 = 1, n, a;
    cout << "Enter a natural number: ";
    cin >> n;

    while (n < 1)
    {
        cout << "Input error. Please enter a natural number: ";
        cin >> n;
    }

    for (int i = 0; i < n; i++)
    {

        a = num1 + num2;
        cout << a << " ";
        num1 = num2;
        num2 = a;
    }

    return 0;
}
