/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 12, 2018, 5:47 PM
 * Purpose:  Write a program that will answer  how much diet soda pop it is 
   possible to drink without dying as a result 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    double mouse_weight, man_weight, mouse_dose, man_dose, cans; // input values
    const double concentration = 0.001; // 1/10th of 1% artificail sweetener
    const int can_weight = 350; // weight of can in grams
    const double sweetener = can_weight*concentration; //grams sweetener per can
    char choice;
    do 
    {
        //Input variable values
        cout << "Enter weight of mouse in grams: ";
        cin >> mouse_weight;
        cout << "Enter lethal dose for the mouse in grams: ";
        cin >> mouse_dose;
        cout << "Enter desired weight of dieter in grams: ";
        cin >> man_weight;
        
        //Lethal dose for man calculation
        man_dose = mouse_dose * man_weight / mouse_weight;
        cans = man_dose / sweetener;
        
        //Output results for dieter
        cout << "\nIf the desired weight of the dieter is " << man_weight;
        cout << " grams\nThe lethal amount of sweetener is " << man_dose;
        cout << " grams,\nWhich is " << cans << " cans of soda.\n";
        
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}