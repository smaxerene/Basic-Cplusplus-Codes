#include <iostream>
using namespace std;

int main() {
    int day;
    
    cout << "Normal Day or Weekend day: Enter a number from 1 - 7: ";
    cin >> day;
    
    switch (day) {
        case 1:
            cout << "1 (sunday) is a weekend day!";
            break;
        case 2:
            cout << "2 (monday) is a normal day!";
            break;
        case 3:
            cout << "3 (tuesday) is a normal day!";
            break;
        case 4:
            cout << "4 (wednesday) is a normal day!";
            break;
        case 5:
            cout << "5 (thursday) is a normal day!";
            break;
        case 6:
            cout << "6 (friday) is a normal day!";
            break;
        case 7:
            cout << "7 (saturday) is a weekend day!";
            break;
        default:
            cout << "Invalid";
    }
    cout << endl;
    return 0;
}

