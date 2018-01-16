/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 12, 2018, 5:09 PM
 * Purpose: Write a program that plays the game of Mad Lib
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main() //Begin main function
{
    double radius, volume; //Variables for program
    {
        const double pi = 3.1415; //Constant for program
        const double numerator = 4.0; //Constant for program
        const double denominator = 3.0; //Constant for program
        
        //Radius input value
        cout << "Enter radius of a sphere.";
        cin >> radius;
        
        //Volume calculation
        volume = (numerator/denominator)*pi*radius*radius*radius;
        
        //Volume output
        cout << "The volume is " << volume << endl;
    }
    //End program
    return 0;
}