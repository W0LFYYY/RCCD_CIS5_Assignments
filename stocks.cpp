/* 
 * File:   stock.cpp
 * Author: Brandon Kakudo
 * Created on January 10, 2023
 * Purpose: This program provides
 *          Kathryn a breakdown of
 *          her stock purchase.
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    
    //Declare Variables
    int shares = 750;
    
    float prcPer = 35.00,
          brk = 0.02,
          fee,
          stock,
          total;
    
    //Initialize Variables
    stock = shares * prcPer;        //total paid for stock before fee
    fee = stock * brk;              //fee amount
    total = fee + stock;            //total paid
    
    //Display Inputs/Outputs
    cout << setprecision(2) << fixed << showpoint << endl;   //Ensure floats displays 2 decimal points to the right
    cout << "Hi Kathryn! Thank you for your recent" << endl;
    cout << "purchase of the stock Coca Cola. Below" << endl;
    cout << " you will find your receipt." << endl;
    cout << endl;
    cout << endl;
    cout << "\t*** Coca Cola ***" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Shares Purchased:" << setw(13)<< shares << endl;
    cout << "Price Per Share:" << setw(12) << "$" << prcPer << endl;
    cout << "Total before Commission:" << setw(4) << "$" << stock << endl;
    cout << "Commission Amount (2%):" << setw(5) << "$" << fee << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total Paid:" << setw(17) << "$" << total << endl;
    
    
    //Exit the Program
    return 0;
}