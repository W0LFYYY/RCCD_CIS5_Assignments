/* 
 * File:   room.cpp
 * Author: Brandon Kakudo
 * Created on January 14, 2023
 * Purpose: Determine if your meeting
 * room is in violation of fire law reg
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int maxCap, att;
    
    //Initialize or input i.e. set variable values
    cout << "Input the maximum room capacity and the number of people" << endl;
    cin >> maxCap >> att;
    
    //Map inputs -> outputs
    if(att <= maxCap){
        cout << "Meeting can be held." << endl;
        cout << "Increase number of people by "<< maxCap - att << " will be allowed without violation.";
    }
    else{
        cout << "Meeting cannot be held." << endl;
        cout << "Reduce number of people by "<< att - maxCap << " to avoid fire violation.";
    }
    
    //exit program
    return 0;
}