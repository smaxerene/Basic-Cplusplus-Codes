#include <iostream>
using namespace std;

int main()  {
        int count;
        int start;
        int change;
        
        cout << "count: ";
        cin >> count;

        cout << "start: ";
        cin >> start;

        cout << "change: ";
        cin >> change;

        for (int i = 1; i <= count; i++) {
                start += change;
                cout << start - change << " ";
        }
        cout << "\n";

        return 0;
}
