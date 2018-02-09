/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on February 4, 2018, 11:16 PM
 * Purpose: . Write a program like that of the previous exercise that converts 
from meters and centimeters into feet and inches
 */

//System Libraries
#include <iostream>
using namespace std;

void get_input(double feet, double inches, double meters, double centimeters);        
double convert(double feet, double inches, double meters , double centimeters);
void give_output(double feet, double inches, double meters, double centimeters);

int main()
{
    double feet, inches, meters, centimeters;
    char check;

    do 
    {
        get_input(feet, inches, meters, centimeters);
        convert(feet, inches, meters, centimeters);
        give_output(feet, inches, meters, centimeters);
        cout<<"Repeat calculation? (Y/N)"<<endl;
        cin>>check;

    }while(check == 'Y' || check == 'y');
    return 0;
}

void get_input(double feet, double inches, double meters, double centimeters)
{ 
    cout<<"Enter feet to convert it to meters: ";
    cin>>feet;
    cout<<endl<<"Enter inches to convert it to centimeters: ";
    cin>>inches;
}

double convert(double feet, double inches, double meters , double centimeters)
{
    meters = feet * 0.3048;
    return meters;
    centimeters = inches * 2.54;
    return centimeters;
}

void give_output(double feet, double inches, double meters, double centimeters)
{
    cout<<feet<<" feet " <<inches<<" inches is equivalent to ";
    cout<<meters<<" meters "<<centimeters<<" centimeters"<<endl;
}
