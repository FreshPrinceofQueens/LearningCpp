#include <iostream>

using namespace std;

int main()
{

    double temp_C;  // temperature in degrees Celsius

    // prompt user to enter a temperature in degrees Celsius
    cout << "Enter a temperature in degrees Celsius: ";

    // read in the temperature in degrees Celsius
    cin >> temp_C;

    // convert Celsius to Fahrenheit
    double temp_F = (1.8 * temp_C) + 32;

    // display temperature in Celsius and Fahrenheit
    cout << temp_C << " degrees Celsius is " << temp_F << " degrees Fahrenheit." << endl;

    return 0;
}