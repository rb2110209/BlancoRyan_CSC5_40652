/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 12, 2018, 4:14 PM
 * Purpose: Write a program that plays the game of Mad Lib
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

int main()
{
    string instructor_name, your_name, food, adjective, color, animal;
    int number;
    {
        cout << "Enter the first of last name of your instructor: ";
        cin >> instructor_name;
        cout << "Enter your name: ";
        cin >> your_name;
        cout << "Enter a food: ";
        cin >> food;
        cout << "Enter a number between 100 and 120: ";
        cin >> number;
        cout << "Enter an adjective: ";
        cin >> adjective;
        cout << "Enter a color: ";
        cin >> color;
        cout << "Enter an animal: ";
        cin >> animal;
        
        
        cout << "\n\nDear Instructor " << instructor_name << ",\n\n";
        cout << "I am sorry that I am unable to turn in my homework at this";
        cout << " time. First, I ate a rotten " << food;
        cout << " which made me turn " << color << " and extremely ill. ";
        cout << "I came down with a fever of " << number << ". Next, my ";
        cout << adjective <<" pet " << animal;
        cout << " must have smelled the remains of the " << food;
        cout << " on my homework, because he ate it. I am currently rewriting ";
        cout << "my homework and hope you will accept it late.\n\n";
        cout << "Sincerely, \n" << your_name;
        
    }
    return 0;
}

