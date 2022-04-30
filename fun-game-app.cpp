#include <string>
#include <iostream>

// uses namespace std
using namespace std;

int main() {
    int choice;

    do{
        // asks user what they want to do and stores variable as choice
        cout << "0. Quit" << endl << "1. Play Game" << endl;
        cin >> choice;

        switch (choice)
            {
                case 0:
                    cout << "You chose to quit!\n";
                    break;
                case 1:
                    cout << "You chose to play game!\n";
                    break;
                default:
                break;
            }
    } while(choice != 0);
}