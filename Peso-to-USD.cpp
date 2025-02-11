#include <iostream>
using namespace std;

int main() {
  
    double pesos;
    double reais;
    double soles;

    cout << "Enter number of Colombian Pesos: ";
    cin >> pesos;

    cout << "Enter number of Brazilian Reais: ";
    cin >> reais;

    cout << "Enter number of Peruvian Soles: ";
    cin >> soles;

    cout << endl;
    cout << "Colombian Pesos to US Dollars: " << (0.00032 * pesos) << endl;
    cout << "Brazilian Reais to US Dollars: " << (0.27 * reais) << endl;
    cout << "Peruvian Soles to US Dollars: " << (0.3 * soles) << endl;

    return 0;
}
