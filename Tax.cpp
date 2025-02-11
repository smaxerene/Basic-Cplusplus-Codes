#include <iostream>
using namespace std; 

int main() {
    string name;
    double salary;
    double afterTaxS;
    double taxRate;

    cout << "What is your name: ";
    cin >> name;

    cout << "What is your annual salary: ";
    cin >> salary;

    cout << "\n";

    if (salary <= 14000) {
        afterTaxS = (salary * (100 - 0.105))/100;
        cout << "Hello " << name << ", your tax rate is 10.5% and your after-tax salary is $" << afterTaxS;
    }

    else if (salary > 14000 && salary <= 48000) {
        afterTaxS = (salary * (100 - 0.175))/100;
        cout << "Hello " << name << ", your tax rate is 17.5% and your after-tax salary is $" << afterTaxS;
    }

    else if (salary > 48000 && salary <= 70000) {
        afterTaxS = (salary * (100 - 0.30))/100;
        cout << "Hello " << name << ", your tax rate is 30% and your after-tax salary is $" << afterTaxS;
    }

    else if (salary > 70000 && salary <= 180000) {
        afterTaxS = (salary * (100 - 0.33))/100;
        cout << "Hello " << name << ", your tax rate is 33% and your after-tax salary is $" << afterTaxS;
    }

    else if (salary > 180000) {
        afterTaxS = (salary * (100 - 0.39))/100;
        cout << "Hello " << name << ", your tax rate is 39% and your after-tax salary is $" << afterTaxS;
    }

    else {
        cout << "ERROR";
        }
    cout << endl;

    return 0;
}
