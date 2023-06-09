/* 
 * File:   cal.cpp
 * Author: Brandon Kakudo
 * Created on January 13, 2023
 * Purpose:  Find the average of 5 numbers
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>    //Math Library
#include <iomanip>  //Fomat Library
using namespace std;

//User Libraries
//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float g1, g2, g3, g4, g5, avg;
    
    //Initialize or input i.e. set variable values
    cout << "Input 5 numbers to average." << endl;
    cin >>  g1>>g2>>g3>>g4>>g5;
    
    avg = (g1+g2+g3+g4+g5) / 5;
    
    //Display the outputs
    cout <<showpoint<<setprecision(2)<< "The average = "<<avg;

    //Exit stage right or left!
    return 0;
}