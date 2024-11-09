#include <iostream>

using namespace std;

int main()
{

    int num, fake_num, j;

    do
    {
        cout << "Enter a single digit odd number: ";

        cin >> num;
    } while (num % 2 == 0);

    fake_num = num;

    for (int i = 1; i <= num / 2 + 1; ++i)
    {

        for (int j = 1; j <= i; ++j)
        {
            cout << "  ";
        }

        if (i == 1)
        {
            for (int k = 1; k <= num; ++k)
            {
                cout << num << " ";
            }
            cout << endl;
        }

        else
        {
            {
                cout << fake_num - 2;

                for (j = 0; j <= fake_num - 4; ++j)
                {

                    cout << "  ";
                }

                if (i != num / 2 + 1)
                    cout << fake_num - 2;
            }

            fake_num -= 2;

            cout << endl;
        }
    }

    return 0;
}
