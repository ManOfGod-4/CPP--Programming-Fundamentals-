#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     cout << endl;
//     int counter = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j > i; j--)
//         {
//             cout << setw(3) << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << setw(3) << j + counter;
//         }
//         for (int k = (i + counter) - 1; k >= i; k--)
//         {
//             cout << setw(3) << k;
//         }

//         cout << endl;
//         counter++;
//     }
// }
// string momin = "Welcome to focp";
// for (char abc : momin)
// {
//     cout << abc << " ";
// }
// system("cls");
// cout << "MOMIN";

// int n = 12345;
// int i = 0;
// int remainder;
// while (n != 0)
// {
//     remainder = n % 10;
//     i = i * 10 + remainder;
//     n /= 10;
// }
// cout << i;
// return 0;

// }
// }
//     for (int i = 1; i <= 5; i++)
//     {
//         for (int j = i; j < 5; j++)
//         {
//             cout << " ";
//         }
//         for (int k = i * 2 - 1; k > 0; k--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 5 - 1; i > 0; i--)
//     {
//         for (int j = 5; j > i; j--)
//         {
//             cout << " ";
//         }
//         for (int k = 0; k < i * 2 - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main()
{
    int remainder = 0;
    int reversed_num = 0;
    int n;
    cin >> n;
    int dummy_num = n;
    while (dummy_num != 0)
    {
        remainder = dummy_num % 10;
        reversed_num = reversed_num * 10 + remainder;
        dummy_num /= 10;
    }
    if (reversed_num == n)
    {
        cout << "The number is a palindrome";
    }

    else
        cout << "not a palidnrome";
}
