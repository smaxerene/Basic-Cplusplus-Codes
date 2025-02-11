#include <iostream>
#include <cstdlib>

using namespace std;    

int main() {

    cout << "MAGIC 🎱 SAYS: \n\n";

    srand(time(NULL));

    int choice = std::rand() % 20;

    if (choice == 0) { cout << "It is certain.\n"; }
    else if (choice == 1) { cout << "It is decidedly so.\n"; }
    else if (choice == 2) { cout << "Without a doubt.\n"; }
    else if (choice == 3) { cout << "Yes - definitely.\n"; }
    else if (choice == 4) { cout << "You may rely on it.\n";}
    else if (choice == 5) { cout << "As I see it, yes.\n"; }
    else if (choice == 6) { cout << "Most likely.\n"; }
    else if (choice == 7) { cout << "Outlook good.\n"; }
    else if (choice == 8) { cout << "Yes.\n"; }
    else if (choice == 9) { cout << "Signs point to yes.\n";}
    else if (choice == 10) { cout << "Reply hazy, try again.\n"; }
    else if (choice == 11) { cout << "Ask again later.\n"; }
    else if (choice == 12) { cout << "Better not tell you now.\n"; }
    else if (choice == 13) { cout << "Cannot predict now.\n"; }
    else if (choice == 14) { cout << "Concentrate and ask again.\n"; }
    else if (choice == 15) { cout << "Don't count on it.\n"; }
    else if (choice == 16) { cout << "My reply is no.\n"; }
    else if (choice == 17) { cout << "My sources say no.\n"; }
    else if (choice == 18) { cout << "Outlook not so good.\n"; }
    else { cout << "Very doubtful.\n"; }

    return 0;

}
