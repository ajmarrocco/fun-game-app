#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

// uses namespace std
using namespace std;

void play_game(){
    // random number between 1 and 250
    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while(true){
        int guess;
        cin >> guess;
        if(guess == random){
            cout << "You win!";
        } else if (guess < random){
            cout << "Too low";
        } else {
            cout << "Too high";
        }
    }
}

int main() {
    //seeds random number and changes every time
    srand(time(NULL));
    int choice;

    do{
        // asks user what they want to do and stores variable as choice
        cout << "0. Quit" << endl << "1. Play Game" << endl;
        cin >> choice;

        switch (choice)
            {
                case 0:
                // Quit option
                    cout << "You chose to quit!\n";
                    break;
                case 1:
                // play game option
                    play_game();
                    break;
                default:
                    break;
            }
        // executes while choice is not zero
    } while(choice != 0);
}