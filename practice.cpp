#include <iostream>
using namespace std;

void diamond(int x);

int main()
{
    diamond(9);
}

void diamond(int x)
{
    int rows = x * 2 - 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = x - 1; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
        x--;
    }
}