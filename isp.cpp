/* 
 * File:   isp.cpp
 * Author: Brandon Kakudo
 * Created on January 16, 2023
 * Purpose: Let the user input the package
 * and hours they have used
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>    //Format Library
using namespace std;

//User Libraries
//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const float PACKA = 9.95,
                ADD_A = 2.00f,
                PACKB = 14.95,
                ADD_B = 1.00f,
                PACKC = 19.95;
                
    const int   HR_A = 10,
                HR_B = 20;
                
          char  pckge;
          int   hrs;
         float  total;
    
    //Initialize or input i.e. set variable values
    cout << "ISP Bill" << endl;
    cout << "Input Package and Hours" << endl;
    cin >> pckge >> hrs;
    
    //Map inputs -> outputs
    if(pckge!='A' && pckge!='B' && pckge!='C' || hrs>744){
        cout << "Please enter a valid package or hours";
    }
    else{
        if(pckge == 'A' && hrs>10){
            total = PACKA + (hrs - HR_A) * ADD_A;
        }
        else if (pckge == 'A' && hrs<=10){
            total = PACKA;
        }
    
        else if(pckge == 'B' && hrs>20){
            total = PACKB + (hrs - HR_B) * ADD_B;
        }
        else if(pckge == 'B' && hrs<=20){
            total = PACKB;
        }
        else if (pckge == 'C'){
            total = PACKC;
        }
    }
    
    //Display the outputs
    cout << "Bill = $" << setw(6) << total;
    
    //Exit stage right or left!
    return 0;
}