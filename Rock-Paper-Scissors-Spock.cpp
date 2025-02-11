#include <iostream>
using namespace std; 

int main() {
 
 srand (time(NULL));
 
int computer = rand() % 3 + 1;
 
int user = 0; 
 
cout << "====================\n";
cout << "rock paper scissors!\n";
cout << "====================\n";
 
cout << "1) ✊\n";
cout << "2) ✋\n";
cout << "3) ✌️\n";
 
cout << "shoot! "; 

cout << "Enter your answer (1-3): ";
cin >> user;
  if (user == 1)
    cout << "you choose: ✊\n";
  else if (user == 2)
    cout << "you choose: ✋\n";
  else
    cout << "you choose: ✌️\n";

  if (computer == 1)
    cout << "cpu choose: ✊\n";
  else if (computer == 2)
    cout << "cpu choose: ✋\n";
  else
    cout << "cpu choose: ✌️\n";

  if (user == computer) {
    cout << "it's a tie!\n";
  }

  // user rock
  else if (user == 1) {
    if (computer == 2) {
      cout << "you lost! booooo!\n";
    }
    if (computer == 3) {
      cout << "you won! woohoo!\n";
    }
  }

  // user paper
  else if (user == 2) {
    if (computer == 1) {
      cout << "you won! woohoo!\n";
    }
    if (computer == 3) {
      cout << "you lost! boo!\n";
    }
  }

  // user scissors
  else if (user == 3) {
    if (computer == 1) {
      cout << "you won! woohoo!\n";
    }
    if (computer == 2) {
      cout << "you lost! booooo!\n";
    }
  }
  return 0;
}
