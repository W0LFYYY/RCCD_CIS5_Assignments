/* 
 * File:   main.cpp
 * Author: Brandon Kakudo
 * Created on January 12, 2023
 * Purpose:  Template to be used for all
 *           future Hmwk, Labs, Exams, Projects
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    int num1=28, 
        num2=32, 
        num3=37, 
        num4=24, 
        num5=33,
        sum;
    
    float avg;
    
    //Initialize Variables
    sum = num1+num2+num3+num4+num5;
    avg = sum / 5;
    
    //Display Inputs/Outputs
    cout << "Let's find the average of our coworkers ages." << endl;
    cout << "First let's write down the ages of our coworkers." << endl;
    cout << endl;
    cout << "Bob:" << setw(6) << num1 << endl;
    cout << "Sally:" << setw(4) << num2 << endl;
    cout << "Zack:" << setw(5) << num3 << endl;
    cout << "Gary:" << setw(5) << num4 << endl;
    cout << "Sam:" << setw(6) << num5 << endl;
    cout << endl;
    cout << "Great! Now lets find the sum of all their ages " << endl;
    cout << "by adding them all up. We should get " << sum << "." << endl;
    cout <<endl;
    cout << "To find the average we just need to divide the " << endl;
    cout << "sum by 5!" << endl;
    cout << endl;
    cout << "The average of our coworkers ages is " << avg << "!" << endl;
    
    
    
    //Exit the Program
    return 0;
}