/* 
 * File:   main.cpp
 * Author: Ryan Blanco
 * Created on January 11, 2018, 7:40 PM
 * Lab 1
 */

#include <iostream>
using namespace std;


int main() 
{
    double gas_price, fed_tax, state_tax, state_sales_tax, 
            total_tax, base_price, percentage_price, profit_range;
    
    cout << "Enter the price of gas per gallon in dollars:\n";
    cin >> gas_price;


    fed_tax = .184; //cents per gallon
    state_tax = .417; //cents per gallon
    state_sales_tax = .0225; //percent
    total_tax = fed_tax + state_tax + gas_price*state_sales_tax;
    base_price = gas_price - total_tax;
    percentage_price = (base_price + total_tax)*100 / base_price;
    profit_range = 0.07 / base_price;
       

    cout << "Total tax on gallon of gas in dollars per gallon\n";
    cout << total_tax;
    cout << "\n Base price for gallon of gas\n";
    cout << base_price;
    cout << "\n Percentage price due to gas tax\n";
    cout << percentage_price;
    cout << "\n Oil company profit range\n";
    cout << profit_range;

    return 0;
}

