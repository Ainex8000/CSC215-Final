/*
Xenia DeNoyer
CSC215 Final (You Walk into a Room)
8.7.22

Program is game simulation of entering a loop that is nearly
impossible to escape with limited options for the user
to pick to escape the loop.
*/

#include <iostream> // Header file
#include "Room.h" // Header file

using namespace std; // std for Standard

int main()
{
    // Variables
    int usAge; // Variable to hold user's age
    int* userAge = &usAge;
    string usColor; // Variable to hold user's favorite color
    string* favColor = &usColor;
    string playerName; // Variable to hold user's name

    // Introduces the program
    cout << "Welcome to the program, we will get started soon." << endl;
    cout << "Let's get to know you a bit before we start." << endl;
    cout << "What is your name?" << endl;
    cin >> playerName; // Takes the player's name
    cout << playerName << ", what a lovely name." << endl;

    age(userAge); // Calls function
    favoriteColor(favColor); // Calls function
    cout << endl;

    // Explains the simulation to the user
    cout << "I believe that is enough for now. Let's begin the game." << endl;
    cout << "Throughout the game you will complete simple puzzles." << endl;
    cout << "These puzzles are not complicated at all and shouldn't be stressed over." << endl;
    cout << "If you correctly answer the puzzle, you will be able to advance." << endl;
    cout << "However, you will not be able to leave your current room until you get it right." << endl;
    cout << endl;
    
    demo(); // Calls function
    cout << endl; // Adds space

    // Dialogue between narrator and player
    cout << "That wasn't so bad, was it? " << playerName << "?" << endl;
    cout << usColor << " might have been the color you liked, but that doesn't necessarily mean it's the right answer." << endl;
    cout << "You're " << usAge << " years old, surely you're not that naive to believe just because it was your favorite of the three it'd be that one." << endl;
    cout << "That is not what we're trying to do here, " << playerName << "." << endl;
    cout << "The correct answer is not what you want it to be, it's what we want it to be." << endl;
    cout << "Let's continue on..." << endl;
    cout << endl; // Adds space

    secondRoom(); // Calls function
    cout << endl; // Adds space

    // More dialogue between narrator and player
    cout << "Returning the Frog to it's home was the perfect answer." << endl;
    cout << "The rat carries disease and would plague the garden." << endl;
    cout << "The crow in a beautiful garden is not fitting for the bird that represents death." << endl;
    cout << "No matter which companion you truly wanted, the Frog is the only one who would bring you to your goal." << endl;
    cout << playerName << ", you only have one more room to go. You're doing well." << endl;
    cout << "Let's carry on." << endl;
    cout << endl; // Adds space

    thirdRoom(); // Calls function
    cout << endl; // Adds space

    // Final dialogue between narrator and player
    cout << "You proceed through the door in an eerie silence." << endl;
    cout << "It's oddly quiet as you enter a long hallway and you begin to make your way to the end of it." << endl;
    cout << "With each step, you feel anxious, like that this is not the end. Not yet. Not yet. Not yet." << endl;
    cout << "No, this can't just be it, can it? No, it can't end yet. Not yet. Not yet. Not yet." << endl;
    cout << "Not yet... You approach a door one last time." << endl;
    cout << endl; // Adds space

    finalRoom();
    cout << endl; // Adds space

    cout << "Thank you for playing." << endl;
  
    system("pause"); // Pauses system
    return 0; // Returns zero.
}

