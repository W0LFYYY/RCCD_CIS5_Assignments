/* 
 * File:   rectangle.cpp
 * Author: Brandon Kakudo
 * Created on January 20, 2023
 * Purpose:  Program should ask user for positive
 * integer no greater than 15 and then display a rectangle
 * using 'x'.
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
    
    //Declare Variables
    char lttr;
    int num;
    
    //Initialize or input i.e. set variable values
    cin >> num;
    cin >> lttr;
    
    //Map inputs -> outputs
    while(num<0 || num>15){
        cout << "Please enter a number between 1 & 15" << endl;
        cin >> num;
    }
    
    for(int i = 0; i < num; i++)
    {
        for(int k = 0; k < num; k++){
            cout << lttr;
        }
        if((i+1) < num){
            cout << endl;
        }
    }
    
    //Exit the Program
    return 0;
}