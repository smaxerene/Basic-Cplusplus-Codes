#include <iostream>
using namespace std;

int main ()
{
	int age;
	int salary;

	cout << "What is your age? ";
	cin >> age;

	cout << "What is your salary? ";
	cin >> salary;

	if (age >= 60 || salary >= 100000){
	     cout << "You are a Gold Star Member! \n";
	}
	else {
	cout << "You are a Standard Member! \n";
	}

    return 0;
} 
