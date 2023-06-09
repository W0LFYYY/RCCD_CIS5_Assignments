/* 
 * File:   race.cpp
 * Author: Brandon Kakudo
 * Created on January 16, 2023
 * Purpose:  Determine how many points
 * the customer earned based on how many
 * books they purchased
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
    const float PERMNTH = 10,
                FEES1 = .10,
                FEES2 = .08,
                FEES3 = .06,
                FEES4 = .04,
                LW = 15,
                BLOW = 400;
                
          float blnc, chkFee, mnthF, lw, newB;
          int chck;
    
    //Initialize or input i.e. set variable values
    cout << "Montly Bank Fees" << endl;
    cout << "Input Current Bank Balance and Number of Checks" << endl;
    cin >> blnc >> chck;
    
    //Map inputs -> outputs
    if(chck<=20){
        chkFee = FEES1 * chck;
    }
    else if(chck<=39){
        chkFee = FEES2 * chck;
    }
    else if(chck<=59){
        chkFee = FEES3 * chck;
    }
    else{
        chkFee = FEES4 * chck;
    }
    
    
    if(blnc<=BLOW){
        mnthF = chkFee + PERMNTH + LW;
    }
    else
        mnthF = chkFee + PERMNTH;
        
    newB = blnc - mnthF; 
    
    if(blnc<0)
        cout << "URGENT! Your account is overdrawn.";
    
    //Display the outputs
    cout << setprecision(2) << fixed << showpoint;  //Ensure everything displays 2 decimal points to the right
    cout << "Balance     $" << setw(9)  << blnc << endl;
    cout << "Check Fee   $" << setw(9) << chkFee << endl;
    cout << "Monthly Fee $" << setw(9)  << PERMNTH << endl;
    cout << "Low Balance $" << setw(9) << LW << endl;
    cout << "New Balance $" << setw(9) << newB;
    
    //Exit stage right or left!
    return 0;
}