/* 
 * File:   main.cpp
 * Author: YOUR NAME HERE
 * Created on DATE AND TIME HERE
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here
//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
//Function Prototypes Here
float packA(int hrsA);
float packB(int hrsB);
float packC(int hrsC);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char pckge;
    int hrs;
    float cost, a, b, c;
    
    //Initialize Variables
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>pckge>>hrs;
    
    //Map/Process the Inputs -> Outputs
    switch(pckge){
        case 'A':
        case 'a': cost = packA(hrs); break;
        
        case 'B':
        case 'b': cost = packB(hrs); break;
        
        case 'C':
        case 'c': cost = packC(hrs); break;
    }
    
  a =  packA(hrs);
  b = packB(hrs);
  c = packC(hrs);
  
   char chpst = 'A';
   if (b < a && b < c) {
        chpst = 'B';
    } 
    else if (c < a && c < b) {
        chpst = 'C';
    }
    
    float save = 0;
    if (chpst == 'B') {
        save = a - b;
    } else if (chpst == 'C') {
        if (a < b) {
            save = a - c;
        } else {
            save = b - c;
        }
    }
   
    //Display Inputs/Outputs
    cout << fixed << setprecision(2) << "$" << cost << " " << chpst << " $" << save << endl;
        
    //Exit
    return 0;
}

float packA(int hrsA) {
    float costA = 16.99;
    int xtrHrsA;
    if (hrsA > 10) {
        xtrHrsA = hrsA - 10;
        if (xtrHrsA > 10) {
            costA += 10 * 0.95 + (xtrHrsA - 10) * 0.85;
        } else {
            costA += xtrHrsA * 0.95;
        }
    }
    return costA;
}

float packB(int hrsB) {
    float costB = 26.99;
    if (hrsB > 20) {
        int xtrHrsB = hrsB - 20;
        if (xtrHrsB > 10) {
            costB += 10 * 0.74 + (xtrHrsB - 10) * 0.64;
        } else {
            costB += xtrHrsB * 0.74;
        }
    }
    return costB;
}

float packC(int hrsC) {
    return 36.99;
}