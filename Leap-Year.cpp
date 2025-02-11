#include <iostream>
using namespace std;

int main () {
    int year;
    bool isLeapYear = false;

    cout << "Please enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeapYear = true;
            }
        } else {
            isLeapYear = true;
        }
    }

    if (isLeapYear) {
        cout << year << " is a leap year.\n";
    } else {
        cout << year << " is not a leap year.\n";
    }

    return 0;
}