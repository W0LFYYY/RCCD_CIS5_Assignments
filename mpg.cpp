/* 
 * File:   mpg.cpp
 * Author: Brandon Kakudo
 * Created on January 22, 2023
 * Purpose: Program defines a function 
 * to compute the number of miles per gallon
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void Mpg(int liters, int miles, const float Gpl);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const float GALPERL = 0.264179;

    int ltrs;
    int dist;
    char choice;
    
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
    do{
            cout << "Enter number of liters of gasoline:" << endl;
            cout << endl;
            cin >> ltrs;
            cout << "Enter number of miles traveled:" << endl;
            cout << endl;
            cin >> dist;
            Mpg(ltrs, dist,  GALPERL);
            cout << "Again:" << endl;
            cin >> choice;
            if(choice == 'y' || choice == 'Y'){
                cout << endl;
            }
            }while(choice == 'y' || choice == 'Y');
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

void Mpg(int liters, int miles, const float Gpl){
    float totalMpg;
    totalMpg = miles / (liters * Gpl);
    cout << "miles per gallon:" << endl;
    cout << fixed << setprecision(2) << totalMpg << endl;
    
}