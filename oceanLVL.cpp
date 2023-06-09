/* 
 * File:   oceanLVL.cpp
 * Author: Brandon Kakudo
 * Created on January 11, 2023
 * Purpose: Figure out the Ocean LVL
 *          in 5yrs, 7yrs, & 10yrs
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library

using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    float  lvl = 1.5,
            yr5,
            yr7,
            yr10;
    
    //Initialize Variables
    yr5 = lvl * 5;
    yr7 = lvl * 7;
    yr10 = lvl * 10;
    
    //Display Inputs/Outputs
    cout << "The Ocean will be " << setprecision(2) << yr5 << " millimeters higher in 5 years." << endl;
    cout << "The Ocean will be " << setprecision(3) << yr7 << " millimeters higher in 7 years." << endl;
    cout << "The Ocean will be " << yr10 << " millimeters higher in 10 years." << endl;
    
    //Exit the Program
    return 0;
}