/* 
 * File:   temp.cpp
 * Author: Brandon Kakudo
 * Created on January 13, 2023
 * Purpose: Program takes user input of
 * an angle and displays sin, cos, and tangent.
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   // Format Library
#include <cmath>     //Math Library
using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle;
    float sinVal, cosVal, tanVal;
    
    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions" << endl;
    cout << "Input the angle in degrees." << endl;
    cin >> angle;
    
    //Map inputs -> outputs
    sinVal = sin(angle*(M_PI/180));     //Formula to find sine
    cosVal = cos(angle*(M_PI/180));     //Formula to find cosine
    tanVal = tan(angle*(M_PI/180));     //Formula to find tangent
    
    //Display the outputs
    cout << "sin(" << angle << ") = " << setprecision(4) << fixed
         << sinVal << endl;
    cout << noshowpoint<<setprecision(0) <<"cos(" << angle << ") = "
         << setprecision(4) << fixed << cosVal << endl;
    cout << noshowpoint<<setprecision(0) << "tan(" << angle << ") = "
         << setprecision(4) << fixed << tanVal;

    //Exit stage right or left!
    return 0;
}