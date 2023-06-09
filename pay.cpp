/* 
 * File:   temp.cpp
 * Author: Brandon Kakudo
 * Created on January 14, 2023
 * Purpose: Figure out new annual and
 * monthly pay based on 7.6% for 6 months
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   // Format Library
using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float preSal, retrPay, newAnn, newMon;
    
    const float INCRE = 0.076;
    
    //Initialize or input i.e. set variable values
    cout << "Input previous annual salary." << endl;
    cin >> preSal;
    
    //Map inputs -> outputs
    retrPay = INCRE*((preSal + newAnn)/2);     // 0.076 is the 7.6% pay increase, 0.5 is for 6 months
    newAnn = preSal + (preSal*INCRE);
    newMon = newAnn / 12;
    
    //Display the outputs
    cout<<"Retroactive pay    = $"<<setw(7)<<fixed<<setprecision(2)<<retrPay<<endl;
    cout<<"New annual salary  = $"<<fixed<<setprecision(2)<<newAnn<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<fixed<<setprecision(2)<<newMon;

    //Exit stage right or left!
    return 0;
}