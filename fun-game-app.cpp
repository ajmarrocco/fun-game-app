#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

// uses namespace std
using namespace std;

void save_score(int count){
    // reads from best_score.txt
    ifstream input("best_score.txt");
    // checks if file opens
    if(!input.is_open()){
        cout << "Unable to read file\n";
        return;
    }
    // sets variable and makes input number from best_score.txt
    int best_score;
    input >> best_score;
    // write to best_score.txt
    ofstream output("best_score.txt");
    // checks if file opens
    if(!output.is_open()){
        cout << "Unable to read file\n";
        return;
    }
    if(count < best_score){
        // output count to the best_score.txt
        output << count;
    } else{
        // output best_score to the best_score.txt (which is the same as before)
        output << best_score;
    }
}

void print_vector(vector<int> vector){
    for (int i = 0; i < vector.size(); i++){
        cout << vector[i] << "\t";
    }
    cout << "\n";
}

void play_game(){
    // creates array for guesses
    vector <int> guesses;

    int count = 0;
    // random number between 1 and 10
    int random = rand() % 20;
    // cout << random << endl;
    cout << "Guess a number between 1 and 20: ";
    while(true){
        int guess;
        cin >> guess;
        count++;
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
    save_score(count);

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