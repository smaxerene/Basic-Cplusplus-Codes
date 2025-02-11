#include <iostream>
using namespace std;

int main() {
   
    int a, b, c;
    
    cout << "Enter A value: ";
    cin >> a;
    
    cout << "Enter B value: ";
    cin >> b;
    
    cout << "Enter C value: ";
    cin >> c;
    
    cout << "\n";
    
    if (a < b && a < c) { // If a is smaller than b and c.
        cout << "A is smallest\n" ;

    } else if (b < a && b < c)  {   // If b is smaller than a and c
        cout << "B is smallest\n";

    } else {
        cout << "C is smallest\n";

    }
     
    cout << endl;
    return 0;
}

