#include <iostream>
using namespace std;

int main() {
    int celsius;
    int fahrenheit;

    cout << "Please enter the temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "Temperature on Fahrenheit: " << fahrenheit << "\n";

    return 0;
}
