#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    int integer1;
    int integer2;
    int opt;
    double add;
    double subtract;
    double multiply;
    double divide;
    double remainder;
    double power;
    double changeNo;
    bool exitCondition = false;

    cout << "CALCULATOR\n\n";

    cout << "Enter first number: ";
    cin >> integer1;

    cout << "Enter second number: ";
    cin >> integer2;

    cout << "\n";

    cout << "Choose an arithmetic operator: \n 1) Addition \n 2) Subtraction \n 3) Multiplication \n 4) Division \n 5) Remainder \n 6) Power (First number to the power of the second number) \n 7) Change numbers \n 8) Exit(Terminate the program) \n\n Enter arithmetic option number: ";
    cin >> opt;
    cout << "\n";

    while (!exitCondition) {
        switch (opt) {
        case 1:
            add = integer1 + integer2;
            cout << integer1 << " + " << integer2 << " = " << add << endl;
            cout << "\n";
            cout << "Enter arithmetic option number: ";
            cin >> opt;
            cout << "\n";
            continue;
        case 2:
            subtract = integer1 - integer2;
            cout << integer1 << " - " << integer2 << " = " << subtract << endl;
            cout << "\n";
            cout << "Enter arithmetic option number: ";
            cin >> opt;
            cout << "\n";
            continue;
        case 3:
            multiply = integer1 * integer2;
            cout << integer1 << " * " << integer2 << " = " << multiply << endl;
            cout << "\n";
            cout << "Enter arithmetic option number: ";
            cin >> opt;
            cout << "\n";
            continue;
        case 4:
            if (integer1 == 0 || integer2 == 0) {
                cout << "\n";
                cout << "Division cannot handle 0, enter a different number. \n";
                cout << "Enter first number: ";
                cin >> integer1;

                cout << "Enter second number: ";
                cin >> integer2;

                cout << "\n";

                cout << "Enter arithmetic option number: ";
                cin >> opt;
                cout << "\n";
            } 
            else {
                divide = integer1 / integer2;
                cout << integer1 << " / " << integer2 << " = " << divide << endl;
                cout << "\n";
                cout << "Enter arithmetic option number: ";
                cin >> opt;
                cout << "\n";
            }
            continue;
        case 5:
            if (integer1 == 0 || integer2 == 0) {
                cout << "\n";
                cout << "Modulo cannot handle 0, enter a different number. \n";
                cout << "Enter first number: ";
                cin >> integer1;

                cout << "Enter second number: ";
                cin >> integer2;

                cout << "\n";

                cout << "Enter arithmetic option number: ";
                cin >> opt;
                cout << "\n";
            }
            else {
                remainder = integer1 % integer2;
                cout << integer1 << " % " << integer2 << " = " << remainder << endl;
                cout << "\n";
                cout << "Enter arithmetic option number: ";
                cin >> opt;
                cout << "\n";
            }
            continue;
        case 6:
            power = pow(integer1, integer2);
            cout << integer1 << " % " << integer2 << " = " << power << endl;
            cout << "\n";
            cout << "Enter arithmetic option number: ";
            cin >> opt;
            cout << "\n";
            continue;
        case 7:
            cout << "\n";
            cout << "Enter first number: ";
            cin >> integer1;

            cout << "Enter second number: ";
            cin >> integer2;

            cout << "\n";

            cout << "Enter arithmetic option number: ";
            cin >> opt;
            cout << "\n";
            continue;
        case 8:
            exitCondition = true;
            break;
        }
    }

    cout << "Program ended!";
    exit(0);
    return 0;
}
