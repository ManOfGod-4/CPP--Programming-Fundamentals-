#include <iostream>
using namespace std;

void miles_to_km();
void celsius_to_fahrenheit();
void feet_to_meters();
void yards_to_meters();

char option;
int main()
{
    do
    {
        cout << endl
             << "MENU: "
             << endl;
        cout << "a) Miles to Km" << endl
             << "b) Celsius to Farenheit" << endl
             << "c) Feet to meters"
             << "d) Yards to meters" << endl
             << "e)  Exit" << endl;

        cout << "Select an option: ";

        cin >> option;
        switch (option)
        {
        case 'a':
            miles_to_km();
            break;
        case 'b':
            celsius_to_fahrenheit();
            break;
        case 'c':
            feet_to_meters();
            break;
        case 'd':
            yards_to_meters();
        case 'e':
            cout << "Exit!" << endl;
            break;
        default:
            cout << "Please select one of the given options.\n";
        }
    } while (option != 'e');
}

void miles_to_km()
{
    double miles;
    cout << "Enter distance in miles: ";
    cin >> miles;
    double km = miles * 1.60934;
    cout << "Equivalent distance in Km: " << km << endl;
}

void celsius_to_fahrenheit()
{
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << "Equivalent temperature in Fahrenheit: " << fahrenheit << endl;
}

void feet_to_meters()
{
    double feet;
    cout << "Enter distance in feet: ";
    cin >> feet;
    double meters = feet * 0.3048;
    cout << "Equivalent distance in meters: " << meters << endl;
}

void yards_to_meters()
{
    double yards;
    cout << "Enter distance in yards: ";
    cin >> yards;
    double meters = yards * 0.9144;
    cout << "Equivalent distance in meters: " << meters << endl;
}