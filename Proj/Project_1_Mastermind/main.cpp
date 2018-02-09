/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 28, 2018, 9:45 PM
 * Purpose:  Compile and run a program that replicates the game "MasterMind"
 */; 

//System Libraries
#include <iostream> // Input - Output Stream Library
#include <iomanip> // Formatting Library
#include <ctime> // Unique Seed Value Library
#include <cstdlib> // Random Value Library
#include <string> // String Library
#include <fstream> // File I/O
#include <cmath> // Math Library
using namespace std; // Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

// Program execution begins
int main(){

    // Initialize Variables
    char inputColor[4], randomColor[4];
    int randomInt, turns = 0;

    // Randomize Codemaker Pattern
    
    // Seed for random number generation
    srand(time(NULL));
    
    // For statement to set integer to color character
    for(int i=0;i<4;i++){
        
        // Equation to randomize integers
        randomInt = (rand()%6)+1;

        // Switch statement to allocate random integers to characters
        switch(randomInt){
            
            // Set first case to equal blue "B" or "b"
            case 1:
                randomColor[i] = 'B';
                randomColor[i] = 'b';
                break;
                
            // Set second case to equal green "G" or "g"
            case 2:
                randomColor[i] = 'G';
                randomColor[i] = 'g';
                break;
                
            // Set third case to equal orange "O" or "o"
            case 3:
                randomColor[i] = 'O';
                randomColor[i] = 'o';
                break;
            
            // Set fourth case to equal purple "P" or "p"
            case 4:
                randomColor[i] = 'P';
                randomColor[i] = 'p';
                break;
            
            // Set fifth case to equal red "R" or "r"
            case 5:
                randomColor[i] = 'R';
                randomColor[i] = 'r';
                break;
                
            // Set sixth case to equal yellow "Y" or "y"
            case 6:
                randomColor[i] = 'Y';
                randomColor[i] = 'y';
                break;   
        }
    }

    // Intro and Rules Prompt
    
    //Game title text
    cout << "- - - - - - - M A S T E R M I N D - - - - - - -" << endl;
    
    //Prompt user input text
    cout << "     Enter four or the following colors:" << endl;
    
    //Text display of input color options
    cout << "Blue = B or b, Green = G or g, Orange = O or o," << endl;
    cout << "Purple = P or p, Red = R or r, Yellow = Y or y" << endl << endl;
    
    //Text display of example output
    cout << "Example: P B Y R" << endl << endl; 
    
    //Text display of feedback key
    cout << "Rules : X =  Correct color in correct place" << endl;
    cout << "        O =  Correct color in wrong place"<< endl << endl;
        
    // Output Codebreaker Results from Input Values
    
    // While statement for input response
    while(turns != 10){
        
        // Turn counter
        turns++;

        // Text display of current turn
        cout << "Turn: " << turns << " of 10" << endl;
        
        // Prompt user input
        cout << "Enter colors: ";
        
        // User input values
        cin >> inputColor[0] >> inputColor[1];
        cin >> inputColor[2] >> inputColor[3];

        // For statement if any input matches random generation
        for(int i=0;i<4;i++){
            
            // If statement to determine match
            if(inputColor[i] == randomColor[i])
                
                // Output if input matches random random generation
                cout << "X" << " ";
            }
        
        // If statement for first input value color match in wrong location
        if(inputColor[0] == randomColor[1] || 
            inputColor[0] == randomColor[2] ||
            inputColor[0] == randomColor[3] ){
            
                // Output if If statement is true
                cout << "O" << " ";
            }
        
        // If statement for second input value color match in wrong location
        if(inputColor[1] == randomColor[0] ||
            inputColor[1] == randomColor[2] ||
            inputColor[1] == randomColor[3]){
            
                // Output if If statement is true
                cout << "O" << " ";
            }
        
        // If statement for third input value color match in wrong location
        if(inputColor[2] == randomColor[0] ||
            inputColor[2] == randomColor[1] ||
            inputColor[2] == randomColor[3]){
            
                // Output if If statement is true
                cout << "O" << " ";
            }
        
        // If statement for fourth input value color match in wrong location
        if(inputColor[3] == randomColor[0] ||
            inputColor[3] == randomColor[1] ||
            inputColor[3] == randomColor[2]){
            
                // Output if If statement is true
                cout << "O" << " ";
            }
        
        cout << endl;
        
        //If statement for input matching random generated sequence
        if(inputColor[0] == randomColor[0] &&
            inputColor[1] == randomColor[1] &&
            inputColor[2] == randomColor[2] &&
            inputColor[3] == randomColor[3]){
            
                //Output text stating correct answer achieved
                cout << "Congratulations! You won!" << endl;
                
                //Output text to display number of turns used
                cout << "Number of tries: " << turns << endl;
                
                //Output text to display correct answer
                cout << "Answer: ";
                
                //Display of colors in correct order
                cout << randomColor[0] << " " << randomColor[1] << " ";
                cout << randomColor[2] << " " << randomColor[3];
                return 0;
            }
        
        //Else statement if answer is not correct
        else{
            
                //Output statement for incorrect answer
                cout << "Try Again." << endl << endl;
            }
	}
    
    //If statement if all turns used without correct answer
    if(turns == 10){
        
                //Output indicating loss
		cout << "You lose." << endl;
                
                //Output text to display correct answer
                cout << "Answer: ";
                
                //Display of colors in correct order
                cout << randomColor[0] << " " << randomColor[1] << " ";
                cout << randomColor[2] << " " << randomColor[3];    
    }
    
    //End of program
    return 0;
}