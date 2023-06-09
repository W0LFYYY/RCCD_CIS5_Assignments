/* 
 * File:   circuitBoard.cpp
 * Author: Brandon Kakudo
 * Created on January 12, 2023
 * Purpose:  Figure out how much an 
 * electronics company sells circuit
 * boards for.
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library

using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    float prfit = 0.35,
          selPrc = 14.95,
          compPrc;
    
    //Initialize Variables
    compPrc = (selPrc * prfit) + selPrc;
    
    //Display Inputs/Outputs
    cout << "The electronics company sells their " << endl;
    cout << "circuit boards for $" << setprecision(2)
        << fixed << compPrc << "." << endl;
    
    //Exit the Program
    return 0;
}