#include <iostream>
using namespace std;
int main()
{
    double temp = 0;
    double sum = 0;
    double average;
    
    for (int i = 1; i < 8 ; i++){
        cout << "Day " << i << " temperature? ";
        cin >> temp;
        sum += temp;
    }
     
    average = sum / 7;
    
    cout << "Average temperature is " << average << "\n";
}
