#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    int guess;
    int tries = 1;

    cout << "Guess a number from 1 to 15 (Maximum of 5 chances): ";
    cin >> guess;

    srand(time(0));

    while (guess != rand() % 15 + 1 && tries < 5) {
        cout << "Wrong guess, try again: ";
        cin >> guess;

        tries++;
    }
    
    if (guess == rand() % 15 + 1 || tries < 5) {
        cout << "Congratulations, you won the game!" << endl;
    }
    else {
        cout << "Sorry, you have reached the limit. \n" << endl;
    }
  
    cout << endl;
    return 0;
}
