/* 
 * File:   insur.cpp
 * Author: Brandon Kakudo
 * Created on January 13, 2023
 * Purpose: Find out the minimum amount of insurance 
 * a person should buy for the property
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    const float INSUR = .80;
        
         float replac, minInsu; 
    
    //Initialize or input i.e. set variable values
    cout << "Insurance Calculator" <<endl;
    cout << "How much is your house worth?" << endl;
    cin >> replac;
    
    //Map inputs -> outputs
    minInsu = replac * INSUR;       //Formula to find minimum replacement cost
    
    //Display the outputs
    cout << "You need $" << minInsu << " of insurance.";

    //Exit stage right or left!
    return 0;
}