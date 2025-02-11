#include <iostream>
using namespace std;

int main()  {

    int a, b;

    cout << "A. Enter a positive number: ";
    cin >> a;

    cout << "B. Enter positive number: ";
    cin >> b;

    cout << "A + B = " << a + b << endl;    
    cout << "A - B = " << a - b << endl;
    cout << "A * B = " << a * b << endl;
    cout << "A / B = " << a / b << endl;
    cout << "A % B = " << a % b << endl;
    cout << "A^4 = " << pow(a, 4) << endl;
    cout << "B^4 = " << pow(b, 4) << endl;
    cout << "sqrt(A) × sqrt(B) = " << sqrt(a) * sqrt(b) << endl;
    cout << "(sqrt(A) × sqrt(B))^4 = " << pow(sqrt(a) * sqrt(b), 4) << endl;    
    cout << "(A + B)^2 = " << pow(a + b, 2) << endl;
    cout << "(A - B)^2 = " << pow(a - b, 2) << endl;
    cout << "(A + B) × (A - B) = " << (a + b) * (a - b) << endl;
    cout << "A^2 + 2AB + B^2 = " << pow(a, 2) + 2 * a * b + pow(b, 2) << endl;
    cout << "A^2 - 2AB + B^2 = " << pow(a, 2) - 2 * a * b + pow(b, 2) << endl;
    cout << "A^3 + B^3 = " << pow(a, 3) + pow(b, 3) << endl;
    cout << "A^3 - B^3 = " << pow(a, 3) - pow(b, 3) << endl;
    cout << "A^3 + 3AB(A + B) = " << pow(a, 3) + 3 * a * b * (a + b) << endl;
    cout << "A^3 - 3AB(A - B) = " << pow(a, 3) - 3 * a * b * (a - b) << endl;

    return 0;
}