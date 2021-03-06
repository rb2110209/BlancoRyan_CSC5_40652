/* 
 * File:   main.cpp
 * Author: Blanco, Ryan
 * Created on January 18, 2018, 7:58 PM
 * Purpose:  Paycheck with a switch case
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main() {
    //Declare Variables
    int payRate, hrsWkd, payChck;
    
    //Initialize Variables
    cout<<"This program gives a paycheck"<<endl;
    cout<<"Type in payrate:"<<endl;
    cin>>payRate;
    cout<<"Type in hours worked:"<<endl;
    cin>>hrsWkd;
    
    //Process/Map inputs to outputs
    switch(hrsWkd){
        case 1 ... 40:payChck=hrsWkd*payRate;break;
        default:payChck=2*payRate*(hrsWkd-40) + payRate*40;
    }
    
    //Output data
    cout<<"Your paychck = $"<<payChck<<endl;
    
    //Exit stage right!
    return 0;
}