#include <iostream>
#include <cmath>
using namespace std;

float points_distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}
int main()
{
    int x1, x2, y1, y2;
    cout << "Enter coordinates of first point: " << endl;
    cin >> x1;
    cin >> y1;

    cout << "Enter coordinates of second point: " << endl;
    cin >> x2;

    cin >> y2;
    cout << points_distance(x1, y1, x2, y2);
    return 0;
}
