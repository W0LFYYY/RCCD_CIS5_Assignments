/* 
 * File:   temp.cpp
 * Author: Brandon Kakudo
 * Created on January 15, 2023
 * Purpose: Create a program that converts 
 * Fahrenheit to Celsius
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   // Format Library
using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float F, C;
    
    //Initialize or input i.e. set variable values
    cout << "Temperature Converter" <<endl;
    cout << "Input Degrees Fahrenheit" <<endl;
    cin >> F;
    
    //Map inputs -> outputs
    C = (5.0 / 9.0) *(F - 32);      //Formula to convert Fahrenheit to Celsius
    
    //Display the outputs
    cout << setprecision(1) << fixed << showpoint << F
         << " Degrees Fahrenheit = " << C << " Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}