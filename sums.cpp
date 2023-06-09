/* 
 * File:   sum.cpp
 * Author: Brandon Kakudo
 * Created on January 16, 2023
 * Purpose:  Positive and Negative Sums
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip> 
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int num, posSum = 0, negSum = 0, total = 0;
    
    //Initialize or input i.e. set variable values
    cout << "Input 10 numbers, any order, positive or negative" << endl;
    for(int i = 0; i < 10; i++){
        cin >> num;
            if(num > 0)
                posSum += num;
            
            else if (num < 0)
                negSum += num;
                
            total += num;
    }
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Negative sum =" << setw(4) << negSum << endl;
    cout << "Positive sum =" << setw(4) << posSum << endl;
    cout << "Total sum    =" << setw(4) << total;
    
    //Exit the Program
    return 0;
}