/* 
 * File:   max.cpp
 * Author: Brandon Kakudo
 * Created on January 22, 2023
 * Purpose: Find the max of either the
 * first 2 parameters then 3 parameters
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1, num2, num3, maxNum, maxNum2;
    
    //Initialize or input i.e. set variable values
    cout << "Enter first number:" << endl << endl;
    cin >> num1;
    cout << "Enter Second number:" << endl << endl;
    cin >> num2;
    cout << "Enter third number:" << endl << endl;
    cin >> num3;
    
    if (num1 > num2){
        maxNum = num1;
    }
    else{
        maxNum = num2;
    }
    if(num1>num3 && num1>num2){
        maxNum2 = num1;
    }
    else  if(num2>num1 && num2>num3){
        maxNum2 = num2;
    }
    else{
        maxNum2 = num3;
    }
    
    //Display the outputs
    cout << "Largest number from two parameter function:" << endl;
    cout << fixed << setprecision(1) << maxNum << endl << endl;
    cout << "Largest number from three parameter function:" << endl;
    cout << fixed << setprecision(1) << maxNum2 << endl;
    
    
    //Exit stage right or left!
    return 0;
}

