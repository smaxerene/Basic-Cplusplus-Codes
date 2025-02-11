#include <iostream>
using namespace std;

int main() {
  
    int dog_age;
    int early_years = 21;
    int later_years;
    int human_years;
    string name;

    cout << "Enter your dog's name: ";
    cin >> name;

    cout << "Enter your dog's age: ";
    cin >> dog_age;

    later_years = (dog_age-2)*4;
    human_years = early_years + later_years;

    std::cout << "My name is " << name <<"! Woof, I am " << human_years << " years old in human years. \n";

    return 0;
}

