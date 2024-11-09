#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    int counter = n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 0; j < counter; j++)
        {
            cout << setw(3) << " ";
        }

        cout << i;

        int dummycounter = i + 1;
        int counter4 = i * 2 - 2;
        if (i >= 2)
        {
            while (dummycounter <= i * 2 - 1)
            {
                cout << setw(3) << dummycounter++;
            }
            while (counter4 >= i)
            {
                cout << setw(3) << counter4--;
            }
        }
        cout << endl;
        counter--;
    }
}
