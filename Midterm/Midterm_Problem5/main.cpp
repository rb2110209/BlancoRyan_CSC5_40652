/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 28, 2018 5:00 PM
 * Purpose:  Overtime
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate, payCheck;
    int hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Calculate Paycheck
    if (hrsWrkd > 40)
    {
        payCheck = payRate*20 + payRate*20*1.5 + payRate*(hrsWrkd - 40)*2;
    }
    else if (hrsWrkd > 20)
    {
        payCheck = payRate*20 + payRate*(hrsWrkd - 20)*1.5;
    }
    else {
        payCheck = payRate*hrsWrkd;
    }
    
    //Output the check
    cout << "$" <<payCheck;
    
    //Exit
    return 0;
}