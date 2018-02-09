/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 28, 2018 5:00 PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,term;
    int nterms, factorial=1;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    
    //Calculate Sequence sum here

    for(int a=1;a<=nterms;a++)
    {
        factorial=factorial*a;
    }
    fx = x - pow (x,nterms)/factorial;
    
    //Output the result here
    cout<<fx;
    
    //Exit
    return 0;
}