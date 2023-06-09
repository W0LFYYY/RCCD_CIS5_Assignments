/* 
 * File:   estCost.cpp
 * Author: Brandon Kakudo
 * Created on January 22, 2023
 * Purpose: Estimate the price of the item
 * in 1 year and 2 years
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
float inf(float i1, float i2);
void year(float it1, float iRate);

int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char choice;
    float item1, item2, infRate;
    
    
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
     do{
        cout << "Enter current price:" << endl;
        cin >> item1;
        cout << "Enter year-ago price:" << endl;
        cin >> item2;
        
        infRate = inf(item1, item2);
        cout << endl;
        year(item1, infRate);
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

float inf(float i1, float i2){
  float rate;
  rate = (i1 - i2) / i2;
  rate = rate * 100;
  cout << "Inflation rate: " << fixed << setprecision(2) << rate << "%" << endl;
  return rate;
}
void year(float it1, float iRate){
    float p1;
    float p2;
    iRate = iRate/100;
    p1 = (iRate * it1) + it1;
    cout << "Price in one year: $" << p1 << endl;
    p2 = (iRate * p1) + p1;
    cout << "Price in two year: $" << p2 << endl;
}