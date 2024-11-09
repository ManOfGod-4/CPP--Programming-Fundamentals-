#include <iostream>
using namespace std;

int main()
{
    int num1, num2, lcm;

    // Input two numbers
    do
    {
        cout << "Enter the first number for LCM: ";
        cin >> num1;
    } while (num1 < 1);

    do
    {
        cout << "Enter the second number for LCM: ";
        cin >> num2;
    } while (num2 < 1);
    // initialization of the variable "lcm" to the larger of the two numbers
    if (num1 > num2)
    {
        lcm = num1;
    }
    else
    {
        lcm = num2;
    }

    // using while loop to find LCM
    while (true)
    {
        // If lcm is divisible by both numbers, it is the LCM
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            break;
        }
        lcm++; // keep incrementing value until lcm is found
    }

    // Output the result
    cout << endl
         << "LCM of " << num1 << " and " << num2 << " is :" << endl
         << "\t" << lcm << endl;

    return 0;
}
