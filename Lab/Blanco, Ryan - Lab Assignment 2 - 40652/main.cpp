/* 
 * File:   Lab 2
 * Author: Ryan Blanco
 * Created on January 12, 2018, 2:44 PM
 * Purpose: Calculate military budget as a percentage of the federal budget
 */

#include <iostream>

using namespace std;

int main() 
{
    double military_budget, federal_budget, military_percent;
    

    military_budget = 639.1e09f;
    federal_budget = 4.094e12f;
    military_percent = 100*military_budget/federal_budget;
       

    cout << "Military budget as a percentage of the federal budget\n";
    cout << military_percent;


    return 0;
}

