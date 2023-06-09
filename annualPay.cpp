/* 
 * File:   main.cpp
 * Author: Brandon Kakudo
 * Created on January 8, 2023
 * Purpose: Calculate the employee's 
 *          annual pay.
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library

using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    float payAmnt = 2200.00,
          annlPay;
    
    int payPer = 26;
    
    //Initialize Variables
    annlPay = payAmnt * payPer;
    
    //Display Inputs/Outputs
    cout << "Bi-Weekly Pay Amount:" << setw(2) << 
        setprecision(2) << fixed << showpoint  << 
        "$" << payAmnt << endl;                     //Ensure pay displays 2 decimal points to the right
    cout << "Annual Pay Amount:" << setw(5) << 
        setprecision(2) << fixed << showpoint <<
        "$" << annlPay << endl;                     //Ensure pay displays 2 decimal points to the right
    
    //Exit the Program
    return 0;
}