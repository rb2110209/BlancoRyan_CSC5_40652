/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 22, 2018, 1:47 PM
 * Purpose: Write an overloaded function max that takes either two or three 
parameters of type double and returns the largest of them.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//Function Prototype
double Max(double n1, double n2, double n3);
double Max(double n1, double n2);

//Main
int main()
{
    //variable declaration
    double num1, num2, num3;
    //inputting values
    cout << "Enter number ";
    cin >> num1;
    cout << "Enter number ";
    cin >> num2;
    cout << "Enter number ";
    cin >> num3;
    //function call to get maximum of two num1 and num3
    cout << "Maximum of num1 and num3: " << Max(num1, num3) << endl;
    //function call to get maximum of two num2 and num3
    cout << "Maximum of num2 and num3: " << Max(num2, num3) << endl;
    //function call to get maximum of three num1 num2 and num3
    cout << "Maximum of num1 num2 and num3: " << Max(num1,num2,num3) << endl; 
}

//function definitions
double Max(double n1, double n2, double n3)
{
    if(n1>n2)
    {
        if(n1>n3)
            return n1;
        else
            return n3;
    }
    {
        if(n2>n3)
            return n2;
        else
            return n3;
    }
}

double Max(double n1, double n2)
{
    if(n1>n2)
        return n1;
    else
        return n2;
}