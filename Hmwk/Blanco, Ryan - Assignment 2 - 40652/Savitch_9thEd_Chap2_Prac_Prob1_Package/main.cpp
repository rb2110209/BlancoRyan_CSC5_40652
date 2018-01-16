/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 12, 2018, 2:53 PM
 * Purpose:  Write a program that will read the weight
of a package of breakfast cereal in ounces and output the weight in metric
tons as well as the number of boxes needed to yield 1 metric ton of cereal. 

 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main()
{
    double ounces, weight, boxes;
    char choice;
    do 
    {
        cout << "Press return after entering a number.\n";
        cout << "Enter the weight in ounces:\n";
        cin >> ounces;
        weight = (ounces/35273.92);
        cout << "Weight of package in metric tons is:\n";
        cout << weight;
    
        boxes = (35273.92/ounces);
    
        cout << "\nNumber of boxes for metric ton: \n";
        cout << boxes;
        cout << "\nPress Y or y to continue \n";
        cin >> choice;
    }   while (choice == 'Y' || choice == 'y');

    return 0;
}