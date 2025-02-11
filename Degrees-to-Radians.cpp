#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double degree;

    cout << "Enter an angle in degrees: ";
    cin >> degree;

    cout << "The angle in radians is: " << degree * M_PI / 180 << endl;

    return 0;
}