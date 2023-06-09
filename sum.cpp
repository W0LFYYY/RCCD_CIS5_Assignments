/* 
 * File:   sum.cpp
 * Author: Brandon Kakudo
 * Created on January 4, 2023, 11:03 AM
 * Purpose:  Using a loop, find the sum of the
 * inputted integer
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables & Initialize
    int nmbr, sum = 0;
    
    //Map/Process the Inputs -> Outputs
    cin >> nmbr;
    
    for(int i = 1; i <= nmbr; i++)
        sum = sum + i;
    cout << "Sum = " << sum;
    
    //Exit the Program
    return 0;
}