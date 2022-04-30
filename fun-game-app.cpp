#include <string>
#include <iostream>

// uses namespace std
using namespace std;

void play_game(){
    cout << "Game is being played!" << endl;
}

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
                    play_game();
                    break;
                default:
                    break;
            }
    } while(choice != 0);
}