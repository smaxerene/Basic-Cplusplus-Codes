#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    srand(time(0));
    
    int random;
    
    for (int i = 1; i <= 5; i++) {
        random = rand() % 40 + 1;
        cout << "Five random numbers from 1 to 40: " << random << " ";
    }
    cout << endl;

    return 0;
}
