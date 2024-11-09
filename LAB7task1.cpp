#include <iostream>
using namespace std;

void diamond(int x);

int main()
{
    int num;
    do // input validation
    {
        cout << "Enter an integer from 1-10: ";
        cin >> num;
    } while (num <= 0 || num >= 10);

    diamond(num);
    cout << endl;
    return 0;
}

void diamond(int x)
{
    // UPPER HALF OF DIAMOND
    int counter2 = 2, rows = x;
    int counter1 = rows;
    for (int i = 1; i <= rows; i++)
    {

        for (int k = 1; k < counter1; k++)
        {
            cout << " ";
        }
        counter1--;
        cout << "*";

        if (i > 1 && counter2 != rows * 2 - 3)
        {
            for (int j = 1; j < counter2; j++)
            {
                cout << " ";
            }
            counter2 += 2;
            cout << "*";
        }

        cout << endl;
    }

    // LOWER HALF OF DIAMOND
    int rows2 = x - 1;
    int counter3 = x * 2 - 5;

    for (int m = 1; m < x; m++)
    {

        for (int n = 1; n <= m; n++)
        {
            cout << " ";
        }

        cout << "*";
        if (counter3 > 0)
        {
            for (int o = 1; o <= counter3; o++)
            {
                cout << " ";
            }
        }
        counter3 -= 2;
        if (m == x - 1)
        {
            break;
        }
        cout << "*";
        cout << endl;
    }
}