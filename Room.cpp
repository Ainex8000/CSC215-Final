/*
	Xenia DeNoyer
	Additional cpp file
	for other functions
*/

#include <iostream> // Header file
#include "Room.h" // Header file

using namespace std; // std for Standard

void age(int* userAge)
{
    // Variables
    int playerAge;
    cout << "How many years are you?" << endl;
    cin >> playerAge;
    cout << playerAge << "? Hmm, how old." << endl;

    *userAge = playerAge; // returns value
}

void favoriteColor(string* favColor)
{
    // Variables
    string color;
    cout << "Which of these colors is your most favorite?" << endl;
    cout << "'Blue,' 'Red,' or 'Yellow'?" << endl;
    cin >> color;
    cout << "I see. " << color << " is a nice color." << endl;

    *favColor = color; // returns value
}

// The first room 
void demo()
{
    // Variables
    string playerAnswer;

    // Starts the loop the player will go through until they select the correct answer
    while (playerAnswer != "Blue")
    {
        cout << "You walk into a room..." << endl;
        cout << "You see three doors. One 'Red', 'Blue', and 'Yellow.'" << endl;
        cout << "Which door do you pick?" << endl;
        // User input
        cin >> playerAnswer;
        cout << endl; // Adds space

        // If Statements based on user's answer
        // Scenario if the red door is picked
        if (playerAnswer == "Red")
        {
            cout << "You walk through the red door, entering a long hallway with red walls." << endl;
            cout << "You begin walking down the endless, red hallway. Getting closer and closer to another door." << endl;
            cout << "You seem to be getting closer but not at the same time. You can hear your heart beat in your ear as you begin to panic." << endl;
            cout << "The door seems to be getting closer but farther at the same time. Will you ever reach it?" << endl;
            cout << "Finally... you reach the door." << endl;
        }
        // Scenario if the yellow door is picked
        else if (playerAnswer == "Yellow")
        {
            cout << "You walk through the yellow door and find yourself in a yellow room." << endl;
            cout << "There are many things in this room, but nothing of use." << endl;
            cout << "Not seeing another way out, you turn towards the door you had gone through." << endl;
            cout << "However, it is gone now. There is no escape from this room." << endl;
            cout << "You begin to endlessly search around for an exit from this yellow room. Finding nothing but terror as you look around." << endl;
            cout << "You are panicking, there is no escape from this room. Your vision begins to blur as your anxiety takes over." << endl;
            cout << "You've lost all feeling in your legs and suddenly your head is very heavy. Hearing the sound of your heart beat in your ear." << endl;
            cout << "Is this end? Am I doomed to be trapped here? You question, you can feel a scream in the back of your throat when suddenly..." << endl;
            cout << "You are standing in front of a door." << endl;
        }
        // Scenario when the blue door is picked
        else if (playerAnswer == "Blue")
        {
            cout << "You walk through the blue door and find yourself standing the bottom of a blue stairwell." << endl;
            cout << "It seems to go up quite a ways, but nonetheless you begin climbing your way up." << endl;
            cout << "You feel at ease as you ascend the blue steps. Feeling as light as air and calm as the wind." << endl;
            cout << "Finally, you reach the top of the steps and find yourself at a door." << endl;
            cout << endl;
        }
    }
}

// The second room
void secondRoom()
{
    // Variables
    string correctAnswer;

    // Starts loop and will continue looping until the player picks the correct response.
    while (correctAnswer != "Frog")
    {
        cout << "You walk into a room..." << endl;
        cout << "In this room you see three cages." << endl;
        cout << "One contains a 'Frog', another has a 'Rat, and the last has a 'Crow.'" << endl;
        cout << "The road ahead requires a companion, pick one and continue through the door ahead." << endl;
        cout << "Which companion do you take?" << endl;
        cin >> correctAnswer;
        cout << endl; // Adds space

        // If Statements based on user's answer
        // Scenario if the Frog was chosen
        if (correctAnswer == "Frog")
        {
            cout << "You let the Frog out of the cage, allowing it to climb onto your shoulder as you advance towards the door." << endl;
            cout << "You walk through the door with your Frog on your shoulder." << endl;
            cout << "Entering a colorful garden with a huge pond in the center, the Frog leaps from your shoulder and hops to the pond." << endl;
            cout << "The Frog dives into the pond and you watch as the blue water turns into a shimmery gold." << endl;
            cout << "You hear a bell chime four times and a sudden click as a door unlocks and open before you." << endl;
            cout << "You advance to the door." << endl;
        }
        // Scenario if the Crow was chosen
        else if (correctAnswer == "Crow")
        {
            cout << "You open the cage for the crow. It pops out and circles you slightly before landing on your shoulder." << endl;
            cout << "You advance towards the door and enter a colorful garden with a huge pond in the center." << endl;
            cout << "Upon entering the garden, the crow flies away from your shoulder and lands on a nearby tree." << endl;
            cout << "As the crow lands, the colorful garden begins to lose its color, becoming a dull mix of black, white, and gray." << endl;
            cout << "You hear a bell chimes twice before a sudden click as a door unlocks and opens before you." << endl;
            cout << "You head towards the door." << endl;
        }
        // Scenario if the Rat was chosen
        else if (correctAnswer == "Rat")
        {
            cout << "You open the cage to the rat and it quickly scurries away from you towards the door." << endl;
            cout << "You follow the rat through the door and find yourself in a colorful garden with a huge pond in the center." << endl;
            cout << "The rat rushes into some nearby bushes and hides from you. Few seconds pass by and the garden begins to wilts." << endl;
            cout << "The grass dries up and the flowers wilt. The trees decay and the water turns a sickish green color." << endl;
            cout << "You hear a bell chime once before a sudden click as a door unlocks and opens before you." << endl;
        }
    }
}

// The third room
void thirdRoom()
{
    // Variables
    int chimes = 4;
    int playerGuess;

    cout << "You walk into a room..." << endl;
    cout << "In the room is an old grandfather clock. Behind it is a locked door" << endl;
    retry:
    cout << "Do you remember how many chimes the bell rung in the last room?" << endl;
    cout << "Set the clock to the correct time to unlock the door." << endl;
    cin >> playerGuess;

    if (playerGuess == chimes)
    {
        cout << "You set the clock to " << playerGuess << "." << endl;
        cout << "The clock begins to chime " << playerGuess << " times." << endl;
        cout << "The door unlocks with a loud click, opening itself for you to proceed." << endl;
    }
    else
    {
        cout << "You set the clock to " << playerGuess << "." << endl;
        cout << "The clock begins to chime " << playerGuess << " times." << endl;
        cout << "The door is silence and remains still. That was the incorrect answer." << endl;
        goto retry;
    }
}

// The final room
void finalRoom()
{
    // Variables
    string vinylRecord;

    cout << "You walk into a room..." << endl;
    cout << "Presented before you is a record player with three vinyl disks." << endl;
    retry:
    cout << "'Orange', 'Green', and 'Purple.'" << endl; 
    cout << "Choose wisely for this choice could have consequences." << endl;
    cout << "Play one record and this will all end finally." << endl;
    cout << "Which record will you play?" << endl;
    cin >> vinylRecord;

    if (vinylRecord == "Orange")
    {
        cout << "You just got Weezered." << endl;
        system("Start https://www.youtube.com/watch?v=Kjr7US2Z9aY");
    }
    else if (vinylRecord == "Green")
    {
        cout << "One of the best songs ever." << endl;
        system("start https://www.youtube.com/watch?v=QAo_Ycocl1E");
    }
    else if (vinylRecord == "Purple")
    {
        cout << "You knew this was coming." << endl;
        system("start https://www.youtube.com/watch?v=dQw4w9WgXcQ");
    }
    else
    {
        cout << "That wasn't a valid option." << endl;
        goto retry;
    }
}