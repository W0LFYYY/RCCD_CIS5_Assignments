/* 
 * File:   sort.cpp
 * Author: Brandon Kakudo
 * Created on January 15, 2023
 * Purpose:  Sort the names
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Library
using namespace std;

//User Libraries
//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string nme1, nme2, nme3;
    
    //Initialize or input i.e. set variable values
    cout << "Sorting Names" << endl;
    cout << "Input 3 names" << endl;
    cin >> nme1 >> nme2 >> nme3;
    
    //Map inputs -> outputs
     if (nme1 <= nme2 && nme1 <= nme3 && nme2 <= nme3) {
        cout << nme1 << endl << nme2 << endl << nme3;
    } else if (nme1 <= nme2 && nme1 <= nme3 && nme3 <= nme2) {
        cout << nme1 << endl << nme3 << endl << nme2;
    } else if (nme2 <= nme1 && nme2 <= nme3 && nme1 <= nme3) {
        cout << nme2 << endl << nme1 << endl << nme3;
    } else if (nme2 <= nme1 && nme2 <= nme3 && nme3 <= nme1) {
        cout << nme2 << endl << nme3 << endl << nme1;
    } else if (nme3 <= nme1 && nme3 <= nme2 && nme1 <= nme2) {
        cout << nme3 << endl << nme1 << endl << nme2;
    } else {
        cout << nme3 << endl << nme2 << endl << nme1;
    }
    //Display the outputs
    
    
   

    //Exit stage right or left!
    return 0;
}