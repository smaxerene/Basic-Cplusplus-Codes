#include <iostream>
using namespace std;

int main() {

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1, answer2, answer3, answer4;
  
  cout << "===============\n";
  cout << "The Sorting Hat\n";
  cout << "===============\n\n";

  // ~~~~~~~~~~ Question 1 ~~~~~~~~~~

  cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  cout << "  1) The Good\n";
  cout << "  2) The Great\n";
  cout << "  3) The Wise\n";
  cout << "  4) The Bold\n\n";
  cout << "Enter your answer (1-4): ";
  cin >> answer1;

  if (answer1 == 1)
    hufflepuff++;
  else if (answer1 == 2)
    slytherin++;
  else if (answer1 == 3)
    ravenclaw++;
  else if (answer1 == 4)
    gryffindor++;

  // ~~~~~~~~~~ Question 2 ~~~~~~~~~~

  cout << "\nQ2) Dawn or Dusk?\n\n";
  cout << "  1) Dawn\n";
  cout << "  2) Dusk\n\n";
  cout << "Enter your answer (1-2): ";
  cin >> answer2;

  if (answer2 == 1)
  {
    gryffindor++;
    ravenclaw++;
  }
  else if (answer2 == 2)
  {
    hufflepuff++;
    slytherin++;
  }
  else
  {
    std::cout << "Invalid input\n";
  }

  // ~~~~~~~~~~ Question 3 ~~~~~~~~~~

  cout << "\nQ3) Which kind of instrument most pleases your ear?\n\n";
  cout << "  1) The violin\n";
  cout << "  2) The trumpet\n";
  cout << "  3) The piano\n";
  cout << "  4) The drum\n\n";
  cout << "Enter your answer (1-4): ";
  cin >> answer3;

  if (answer3 == 1)
    slytherin++;
  else if (answer3 == 2)
    hufflepuff++;
  else if (answer3 == 3)
    ravenclaw++;
  else if (answer3 == 4)
    gryffindor++;

  // ~~~~~~~~~~ Question 4 ~~~~~~~~~~

  cout << "\nQ4) Which road tempts you the most?\n\n";
  cout << "  1) The wide, sunny grassy lane\n";
  cout << "  2) The narrow, dark, lantern-lit alley\n";
  cout << "  3) The twisting, leaf-strewn path through woods\n";
  cout << "  4) The cobbled street lined (ancient buildings)\n\n";
  cout << "Enter your answer (1-4): ";
  cin >> answer4;

  if (answer4 == 1)
    hufflepuff++;
  else if (answer4 == 2)
    slytherin++;
  else if (answer4 == 3)
    gryffindor++;
  else if (answer4 == 4)
    ravenclaw++;

  // ========== Sorting ==========

  cout << "\nCongrats on being sorted into... ";

  int max = 0;
  std::string house;

  if (gryffindor > max)
  {
    max = gryffindor;
    house = "Gryffindor!";
  }
  if (hufflepuff > max)
  {
    max = hufflepuff;
    house = "Hufflepuff!";
  }
  if (ravenclaw > max)
  {
    max = ravenclaw;
    house = "Ravenclaw!";
  }
  if (slytherin > max)
  {
    max = slytherin;
    house = "Slytherin!";
  }
  std::cout << house << "!\n";
  return 0;
}
