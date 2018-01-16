/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 12, 2018, 3:17 PM
 * Purpose:  Write a program that inputs a double for n and iterates through the
Babylonian algorithm 100 times. For a more challenging version, iterate
until guess is within 1% of the previous guess, and outputs the answer as
a double.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main () 
{ 
    int n; 
    double r, guess_initial, guess_iterated; 

    cout << "Enter a positive integer: "; 
    cin >> n; 
    guess_initial = n / 2; //Initial guess value
    cout << "Initial guess: "<<(guess_initial); 
    guess_iterated = guess_initial; //Iterated guess value
    do 
    { 
        r = n / guess_iterated; 
        guess_iterated = (guess_iterated + r ) / 2; 
    }
    while (guess_iterated>(0.0001+((guess_iterated+n/guess_iterated)/2))); 

    cout << "\nIterated value of guess: " << guess_iterated; 


    return 0; 
} 