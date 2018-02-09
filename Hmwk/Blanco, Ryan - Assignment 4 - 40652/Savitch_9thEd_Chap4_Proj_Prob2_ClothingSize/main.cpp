/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 3:35 PM
 * Purpose: Write a program that asks for the user’s height, weight, and age, 
and then computes clothing sizes according to the formulas
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Function Prototype
double hatSize(double weight, double height);
double jacketSize(double weight, double height, int age);
double waistSize(double weight, double height, int age);

//Main
int main()
{
    double weight, height;
    int age;
    char choice;
    
    do
    {
        //Input Variables
        cout << "Press return after entering a number.\n";
        cout << "Enter weight in pounds: \n";
        cin >> weight;
        cout << "Enter height in inches: \n";
        cin >> height;
        cout << "Enter age: \n";
        cin >> age;
        
        //Output Calculations and Values
        cout << "Hat size in inches: \n";
        cout << hatSize(weight, height) << endl;
        cout << "Jacket size in inches: \n";
        cout << jacketSize(weight, height, age) << endl;
        cout << "Waist size in inches: \n";
        cout << waistSize(weight, height, age) << endl;
        
        //Repeat Loop Choice
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
    
    return 0;
}

//function definition
double hatSize(double weight, double height)
{
    double sizeOfHat;
    sizeOfHat = 2.9*weight/height;
    return sizeOfHat;
}

//function definition
double jacketSize(double weight, double height, int age)
{
    double sizeOfJacket;
    int newAge, tens;
    
    sizeOfJacket = weight*height/288;
    
    if(age>30)
    {
        newAge = age - 30;
        tens = newAge/10;
        sizeOfJacket = sizeOfJacket + tens/8;
    }
    return sizeOfJacket;
}

//function definition
double waistSize(double weight, double height, int age)
{
    double sizeOfWaist;
    int newAge, twos;
    
    sizeOfWaist = weight/5.7;
    
    if(age>28)
    {
        newAge = age - 28;
        twos = newAge/2;
        sizeOfWaist = sizeOfWaist + twos/10;
    }
    return sizeOfWaist;
}