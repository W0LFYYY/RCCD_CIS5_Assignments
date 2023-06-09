/* 
 * File:   m5.cpp
 * Author: Brandon Kakudo
 * Created on January 28, 2023
 * Purpose:  Template to be used for all
 *           future Hmwk, Labs, Exams, Projects
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
//Function Prototypes Here
float findPay(float rate, float hrs);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float payRate, pay;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Output the check
    pay = findPay(payRate, hrsWrkd);
    cout << "$" << fixed << setprecision(2) << pay << endl;
    
    //Exit
    return 0;
}

 //Calculate Paycheck
float findPay(float rate, float hrs) {
    float pay = 0;
    if (hrs <= 20) {
        pay = rate * hrs;
    } else if (hrs > 20 && hrs <= 40) {
        pay = rate * 20 + (hrs - 20) * rate * 1.5;
    } else {
        pay = rate * 20 + 20 * rate * 1.5 + (hrs - 40) * rate * 2;
    }
    return pay;
}