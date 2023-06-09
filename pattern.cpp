/* 
 * File:   pattern.cpp
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
    unsigned short num;
    
    cin >> num;
    
    //Map inputs -> outputs
    for(int i = 0; i<num; i++){
        for(int k = 0; k<=i; k++){
            cout << "+";
        }
        cout<<endl;
        if(i != num){
            cout << endl;
        }
    }
    for(int i = 0; i < num; i++){
        for(int k = num; k>i; k--){
            cout << "+";
        }
        if(i != num - 1){
            cout<<endl;
            cout<<endl;
        }
    }
    
    //Exit the Program
    return 0;
}