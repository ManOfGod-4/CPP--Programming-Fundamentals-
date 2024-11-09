#include <iostream>
using namespace std;

int add(int, int);
int main()
{
    cout << "Count the sum of 10 even numbers." << endl;
    int num, sum = 0, counter = 0, remaining_num = 10;
    while (counter != 10)
    {
        cout << "Remaining numbers: " << remaining_num
             << ", Enter an even number: ";

        cin >> num;
        if (num % 2 != 0)
        {
            cout << num << " is not an even number. Try again.\n";
            continue;
        }
        sum = add(num, sum);
        counter++;
        remaining_num--;
    }
    cout << "The sum of 10 even numbers is: " << sum << endl;
}
int add(int x, int y)
{
    return x + y;
}
