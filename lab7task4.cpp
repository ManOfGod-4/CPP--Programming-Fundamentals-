#include <iostream>
#include <cmath>
using namespace std;

double show_difference(double x, double y);
double calc_area(double x, double y);

int main()
{
    double length, width;
    cout << "Enter length of rectangle" << endl;
    cin >> length;
    cout << "Enter width of rectangle" << endl;
    cin >> width;
    cout << "The difference of area of circle and ellipse is: " << show_difference(length, width);
    return 0;
}

double calc_area(double x, double y)
{
    double area = 3.14 * (x / 2) * (y / 2);
    return area;
}

double show_difference(double x, double y)
{
    double area = 3.14 * (x / 2) * (y / 2);
    double z = (x * x) + (y * y);
    double diameter = sqrt(z);

    double diff = calc_area(diameter, diameter) - calc_area(x, y);
    return diff;
}
