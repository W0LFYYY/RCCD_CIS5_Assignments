/* 
 * File:   paycheck.cpp
 * Author: Brandon Kakudo
 * Created on January 13, 2023
 * Purpose: Calculate the gross pay by using
 * pay rate & hours worked. Normal pay for the
 * first 40hrs and double time for over 40hrs.
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float pRate, worked, pay;
    
    //Initialize or input i.e. set variable values
    cout << "This program calculates the gross paycheck." << endl;
    cout << "Input the pay rate in $'s/hr and the number of hours." << endl;
    cin >> pRate >> worked;
    
    //Map inputs -> outputs
    pay = (worked <= 40)?
            (worked*pRate) :
            (40*pRate) + ((worked-40)*(pRate*2));
    
    //Display the outputs
    cout << "Paycheck = $" << setprecision(2) << fixed
         << showpoint << setw(7)<< pay;
    
    //Exit stage right or left!
    return 0;
}