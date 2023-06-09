/* 
 * File:   minMax.cpp
 * Author: Brandon Kakudo
 * Created on January 21, 2023
 * Purpose:  Program lets the user enter a
 * series of integers until -99 is entered
 * stopping the program. This program will
 * find the largest and smallest integer entered
 */

//System Libraries
#include <iostream>  //Input Output Library

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    int max = 0,
        num = 0,
        min = 1000000;
    
    //Initialize or input i.e. set variable values
    while(num!=-99){
        cin >> num;
        if(num==-99)break;      //break stops -99 from being used as an integer 
        if(num>max){max=num;}   //Find largest number
        if(num<min){min=num;}   //Find smallest number
    }
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Smallest number in the series is " << min << endl;
    cout << "Largest  number in the series is " << max;

    //Exit stage right or left!
    return 0;
}