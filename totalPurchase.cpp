/* 
 * File:   totalPurchase.cpp
 * Author: Brandon Kakudo
 * Created on January 11, 2023
 * Purpose: Calculate the customers
 *          purchase.
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    float itm1 = 15.95,
          itm2 = 24.95,
          itm3 = 6.95,
          itm4 = 12.95,
          itm5 = 3.95,
          total;
    
    //Initialize Variables
    total = itm1+itm2+itm3+itm4+itm5;       //Formula to find total of all items
    
    //Display Inputs/Outputs
    cout << setprecision(2) << fixed << endl;   //Ensure everything displays only 2 decimal points to the right
    cout << "Customer Receipt" << endl;
    cout << "----------------------------" << endl;
    cout << "Item 1:" << setw(10) << "$" << itm1 << endl;
    cout << "Item 2:" << setw(10) << "$" << itm2 << endl;
    cout << "Item 3:" << setw(10) << "$" << itm3 << endl;
    cout << "Item 4:" << setw(10) << "$" << itm4 << endl;
    cout << "Item 5:" << setw(10) << "$" << itm5 << endl;
    cout << "----------------------------" << endl;
    cout << "Total Paid:"<< setw(6) << "$" << total << endl;
    
    //Exit the Program
    return 0;
}