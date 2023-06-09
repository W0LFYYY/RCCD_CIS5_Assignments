/* 
 * File:   avg.cpp
 * Author: Brandon Kakudo
 * Created on January 11, 2023, 11:03 AM
 * Purpose:  Find how many many Calories
 * the person consumed.
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>  //Format Library
#include <cmath>    //Math Library
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
   const int BAG = 40, 
             SERV = 10,
             CAL = 300;
         
        int eat, calAte, oneCook, sngServ;
   
        
    
    //Initialize Variables
    cout<< "Calorie Counter" <<endl;
    cout<< "How many cookies did you eat?" <<endl;
    cin >> eat;
    
    //Map/Process the Inputs -> Outputs
    sngServ =  BAG / SERV;          //Find how many cookies are in a single serving
    oneCook = CAL / sngServ;        //Find how many calories are in one cookies
    calAte = eat * oneCook;         //Find how many calories person ate
    
    //Display Inputs/Outputs
    cout << "You consumed " << calAte << " calories.";
    
    //Clean up memory and files
    
    //Exit the Program
    return 0;
}