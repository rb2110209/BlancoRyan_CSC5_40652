/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 28, 2018 5:00 PM
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char number[5];
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>number;
    
    //Histogram Here
    for(int i=3;i>=0;i--)
    {
        if(isdigit(number[i]))
        {
            cout<<number[i]<<" ";
            int n=number[i]-'0';
            while(n--)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    else
        {
            cout<<number[i]<<" ?"<<endl;
        }
    }       
    //Exit
    return 0;
}