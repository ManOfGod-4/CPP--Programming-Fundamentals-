#include <iostream>
using namespace std;

int main()
{

    for (int i = 1; i <= 15; i++)
    {
        for (int j = i; j < 15; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}