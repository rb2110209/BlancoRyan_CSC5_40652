/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 28, 2018 5:00 PM
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
void expand(int);
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned short number;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    expand (number);
    
    //Output the check value
    cout<<" and no/100's Dollars"<<endl;
}
void expand(int value)
{
    const char * const ones[20] = {"zero", "one", "two", "three","four",
    "five","six","seven","eight","nine","ten","eleven","twelve","thirteen",
    "fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    const char * const tens[10] = {"", "ten", "twenty", "thirty","forty",
    "fifty","sixty","seventy","eighty","ninety"};

    if(value<0)
    {
        cout<<"minus ";
        expand(-value);
    }
    else if(value>=1000)
    {
        expand(value/1000);
        cout<<" thousand";
        if(value % 1000)
        {
            if(value % 1000 < 100)
            {
                cout << " and";
            }
            cout << " " ;
            expand(value % 1000);
        }
    }
    else if(value >= 100)
    {
        expand(value / 100);
        cout<<" hundred";
        if(value % 100)
        {
            cout << " and ";
            expand (value % 100);
        }
    }
    else if(value >= 20)
    {
        cout << tens[value / 10];
        if(value % 10)
        {
            cout << " ";
            expand(value % 10);
        }
    }
    else
    {
        cout<<ones[value];
    }

    return;
}