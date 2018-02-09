/* File:   main.cpp
 * Author: Ryan Blanco
 * Created on February 4, 2018, 11:11 PM
 * Purpose: Write a function that computes the average and standard deviation 
of four scores
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

double mean(int,int,int,int,int);
double standardd(int,int,int,int,int, double);
double calc(int, double);

int main()
{
    double average,sd;
    int x1,x2,x3,x4;
    cout<<"Enter 1st value ";
    cin>>x1;
    cout<<"Enter 2nd value ";
    cin>>x2;
    cout<<"Enter 3rd value ";
    cin>>x3;
    cout<<"Enter 4th value ";
    cin>>x4;

    average=mean(x1,x2,x3,x4,4);
    sd=standardd(x1,x2,x3,x4,4,average);
    cout<<"The average is "<<average<<"\n";
    cout<<"The standard deviation is "<<sd<<"\n";

    return 0;
}

double mean(int x1, int x2,int x3, int x4,int n)
{
    return (x1+x2+x3+x4)/(double)n;
}

double calc(int x,double avg)
{
    double temp;
    temp=x-avg;
    return temp*temp;
}

double standardd(int x1, int x2,int x3, int x4, int n, double average)
{
    double d1,d2,d3,d4,avg;
    d1=calc(x1,average);
    d2=calc(x1,average);
    d3=calc(x1,average);
    d4=calc(x1,average);
    avg=mean(x1,x2,x3,x4,n);
    return sqrt(avg);
}