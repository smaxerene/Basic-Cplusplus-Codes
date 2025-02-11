#include <iostream>
using namespace std;

int main() {

    int numbers[3][3];
    
    //Input Numbers
    for (int i = 0; i < 3; i++){ //row
        for (int j = 0; j < 3; j++) { //column
            cout << "Enter element at row " << i << " & column " << j << ": ";
            cin >> numbers[i][j];
        }
    }
    cout << "\n";
    
    //Output Numbers
    cout << "The elements of the array are: \n";
    cout << "****************************** ";
    for (int i = 0; i < 3; i++){
        cout << endl;
        for (int j = 0; j < 3; j++){
            cout << numbers[i][j] << "\t";
        }
    }
    cout << endl;
}
