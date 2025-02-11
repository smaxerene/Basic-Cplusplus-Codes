#include <iostream>
using namespace std;

int main() {
   
    int year;
    
    cout << "Please enter a year: ";
    cin >> year;
    
    while (year > 0) {
    int romanLetter = year >= 1 ? 1 : 0;
    romanLetter = year >= 4 ? 4 : romanLetter;
    romanLetter = year >= 5 ? 5 : romanLetter;
    romanLetter = year >= 9 ? 9 : romanLetter;
    romanLetter = year >= 10 ? 10 : romanLetter;
    romanLetter = year >= 40 ? 40 : romanLetter;
    romanLetter = year >= 50 ? 50 : romanLetter;
    romanLetter = year >= 90 ? 90 : romanLetter;
    romanLetter = year >= 100 ? 100: romanLetter;
    romanLetter = year >= 400 ? 400 : romanLetter;
    romanLetter = year >= 500 ? 500: romanLetter;
    romanLetter = year >= 900 ? 900 : romanLetter;
    romanLetter = year >= 1000 ? 1000 : romanLetter;

        switch (romanLetter) {
            case 1000: cout << "M"; break;
            case 900: cout << "CM"; break;
            case 500: cout << "D"; break;
            case 400: cout << "CD"; break;
            case 100: cout << "C"; break;
            case 90: cout << "XC"; break;
            case 50: cout << "L"; break;
            case 40: cout << "XL"; break;
            case 10: cout << "X"; break;
            case 9: cout << "IX"; break;
            case 5: cout << "V"; break;
            case 4: cout << "IV"; break;
            case 1: cout << "I"; break;
                
        }
  
        year = year - romanLetter;
    }
    cout << "\n";
}
