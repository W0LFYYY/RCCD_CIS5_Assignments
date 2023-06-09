/* 
 * File:   infla.cpp
 * Author: Brandon Kakudo
 * Created on January 22, 2023
 * Purpose: Program the figures out 
 * inflation
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void inf(float i1, float i2);

int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char choice;
    float item1, item2;
    
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
     do{
        cout << "Enter current price:" << endl;
        cin >> item1;
        cout << "Enter year-ago price:" << endl;
        cin >> item2;
        inf(item1, item2);
        cout << endl;
        cout << "Again:" << endl;
        cin >> choice;
        
        if(choice == 'y' || choice == 'Y'){
          cout << endl;
        }
    }
    
    while((choice == 'y' || choice == 'Y'));

    //Exit stage right or left!
    return 0;
}

void inf(float i1, float i2){
  float rate;
  rate = (i1 - i2) / i2;
  rate = rate * 100;
  cout << "Inflation rate: " << fixed << setprecision(2) << rate << "%" << endl;
}