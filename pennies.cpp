/* 
 * File:   pennies.cpp
 * Author: Brandon Kakudo
 * Created on January 21, 2023
 * Purpose:  This program calculates how
 * much a person earned in pennies using
 * the users input on how many days
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>     //Format Library
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int days,
        payDay = 0,
        pnny = 1;
    
    //Initialize or input i.e. set variable values
    cin >> days;       //User Input amount of days worked
    
    while(days<1){
        cout << "You must enter a value greater than 1.";
        cin >> days;
    }
    
    //Map inputs -> outputs
    for(int i = 0; i < days; i++){
        payDay += pnny;     //add pay to total
        pnny *= 2;          //double pay each day
    }
        
    //Display the outputs
    cout << "Pay = $" << fixed << setprecision(2) << setw(4) << payDay * .01;       //.01 conversion for penny
    

    //Exit stage right or left!
    return 0;
}