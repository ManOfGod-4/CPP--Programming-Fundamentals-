#include <iostream>
using namespace std;

float harmonic_mean(int N);

int main()
{
    int N;

    cout << "Enter the number of elements (N): ";
    cin >> N;

    if (N <= 0)
    {
        cout << "N must be greater than 0." << endl;
        return 1;
    }

    float result = harmonic_mean(N);
    cout << "The Harmonic Mean is: " << result << endl;

    return 0;
}

float harmonic_mean(int N)
{
    float sum = 0.0;
    float number;
    int count = 0;

    do
    {
        cout << "Enter number " << count + 1 << ": ";
        cin >> number;

        if (number == 0)
        {
            cout << "Number cannot be zero. Please enter a non-zero number." << endl;
            continue;
        }

        sum += 1 / number;
        count++;
    } while (count < N);

    return N / sum;
}
