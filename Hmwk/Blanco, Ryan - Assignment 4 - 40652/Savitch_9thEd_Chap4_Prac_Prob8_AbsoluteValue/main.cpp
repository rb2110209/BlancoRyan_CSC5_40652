/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 1:35 PM
 * Purpose: Find all the absolute value functions you can and rewrite all 
 of them overloading the abs function name
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Function Prototypes
int absolute(int n);
double absolute(double n);
float absolute(float n);

//Main
int main()
{
    //calling integer absolute overload function
    int i = -10;
    cout << "Absolute value of -10: " << absolute(i) << endl;
    //calling integer absolute overload function
    double d = =10.01;
    cout << "Absolute value of -10.01: " << absolute(d) << endl;
    
}