/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 12:34 PM
 * Purpose:  Write a function definition that takes arguments for the masses 
of two bodies and the distance between them and that returns the gravitational 
force. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Prototype function
double Force(double mass1, double mass2, double distance);

//Universal constant
const double G = 6.673E-8;

int main()
{
    double mass1, mass2, distance, force;
    char choice;
    do 
    {
        //Input Variables
        cout << "Press return after entering a number.\n";
        cout << "Enter the mass for body 1 in grams:\n";
        cin >> mass1;
        cout << "Enter the mass for body 2 in grams:\n";
        cin >> mass2;
        cout << "Enter distance between masses in centimeters:\n";
        cin >> distance;
        
        //Output Calculations and Values
        cout << "Gravitational attractive force between the two bodies:\n";
        cout << Force(mass1, mass2, distance) << endl;
        
        //Repeat Loop Choice
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}

//Function definition
double Force(double mass1, double mass2, double distance)
{
    double force;
    force = G*mass1*mass2/(distance*distance);
    return(force);
}