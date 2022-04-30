#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

// uses namespace std
using namespace std;

void print_vector(vector<int> vector){
    for (int i = 0; i < vector.size(); i++){
        cout << vector[i] << "\t";
    }
    cout << "\n";
}

void play_game(){
    // creates array for guesses
    vector <int> guesses;
    // random number between 1 and 10
    int random = rand() % 11;
    // cout << random << endl;
    cout << "Guess a number: ";
    while(true){
        int guess;
        cin >> guess;
        // adds value of guess to the array guesses
        guesses.push_back(guess);

        if(guess == random){
            cout << "You win!" << endl;
            break;
        } else if (guess < random){
            cout << "Too low" << endl;
        } else {
            cout << "Too high" << endl;
        }
        
    }
    print_vector(guesses);
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