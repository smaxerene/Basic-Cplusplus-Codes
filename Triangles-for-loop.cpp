#include <iostream>
using namespace std;

int main () {

    // First Shape
    cout << "First Shape" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << endl;

    //Second Shape
    cout << "Second Shape" << endl;
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << "\n";
    }       
    cout << endl;

    //Third Shape
    cout << "Third Shape" << endl;
    for (int i = 5; i >= 1; i--){
        for (int k = 5 - i; k > 0; k--)
            cout <<" ";
            for (int j = i; j > 0; j--){
                cout << "*";
            }
        cout << "\n";
    }
    cout << endl;

    //Fouth Shape
    cout << "Fourth Shape" << endl;
    for (int i = 1; i <= 5; i++){
        for (int k = 5 - i; k > 0; k--)
            cout <<" ";
            for (int j = 1; j <= i; j++){
                cout << "*";
            }
        cout << "\n";
    }
    cout << endl;

    //Fifth Shape
    cout << "Fifth Shape" << endl;
    for (int i = 1; i <= 5; i++) {
        for (int k = 5 - i; k > 0; k--)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    //Sixth Shape
    cout << "Sixth Shape" << endl;
    for (int i = 5; i >= 1; i--) {
        for (int k = 5 - i; k > 0; k--)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //Seventh Shape
    cout << "Seventh Shape" << endl;
    for (int i = 1; i <= 5; i++) { //row
		for (int j = 1; j <= i; j++) { //column
			if (i % 2 != 0) {
				cout << "* ";
			}
			else {
				cout << "~ ";
			}
		}
		cout << "\n";
	}
    cout << endl;   

    return 0;
}

    