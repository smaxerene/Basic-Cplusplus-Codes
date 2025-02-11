#include <iostream>
using namespace std;

int main() {
    double cm;
    double in;
    double m;
    double mm;
    double microm;

    cout << "Please enter a number in centimetre: ";
    cin >> cm;

    in = cm / 2.54;
    cout << " Value in inch is " << in << "\n";

    m = cm / 100;
    cout << " Value in metre is " << m << "\n";

    mm = cm * 10;
    cout << " Value in millimetre is " << mm << "\n";

    microm = cm * 10000;
    cout << " Value in micrometre is " << microm <<"\n";

    return 0;
}
