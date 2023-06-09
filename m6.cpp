/* 
 * File:   m6.cpp
 * Author: Brandon Kakudo
 * Created on January 28, 2023
 * Purpose:  Template to be used for all
 *           future Hmwk, Labs, Exams, Projects
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float factorial(int n);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x, fx = 0;
    int terms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>terms;
    
    //Calculate Sequence sum here
    for (int i = 0; i < terms; i++) {
    double term = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    fx += term;
    }
    
    //Output the result here
    cout <<fixed << setprecision(6) << showpoint;
    cout << fx << endl;
    
    //Exit
    return 0;
}

float factorial(int n) {
  float rslt = 1;
  for (int i = 1; i <= n; i++) {
    rslt *= i;
  }
  return rslt;
}