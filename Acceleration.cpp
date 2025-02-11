#include <iostream>
using namespace std;
int main() {
    int iv;
    int fv;
    int time;
    int acc;

    cout << "Input Initial Velocity (m/s): ";
    cin >> iv;
    cout <<"\n";

    cout << "Input Final Velocity (m/s): ";
    cin >> fv;
    cout <<"\n";

    cout << "Input Time taken (sec): ";
    cin >> time;
    cout <<"\n";

    acc = (fv-iv)/time;
    cout << "The Acceleration is: " << acc;
    cout <<"\n";

    return 0;
}
