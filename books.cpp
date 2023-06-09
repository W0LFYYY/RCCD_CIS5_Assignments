/* 
 * File:   books.cpp
 * Author: Brandon Kakudo
 * Created on January 15, 2023
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
    const int PNT1 = 5,
              PNT2 = 15,
              PNT3 = 30,
              PNT4 = 60;
              
          int books;
    
    //Initialize or input i.e. set variable values
    cout << "Book Worm Points" << endl;
    cout << "Input the number of books purchased this month." << endl;
    cin >> books;
    cout << "Books purchased =" << setw(3)  << books << endl;
    cout << "Points earned   =" << setw(3); 
    
    //Map inputs -> outputs
    if(books == 0)
        cout << PNT1;
    else if(books == 1)
        cout << PNT2;
    else if(books == 2)
        cout << PNT3;
    else if(books == 3)
        cout << PNT3;
    else
        cout << PNT4;
    
    //Exit stage right or left!
    return 0;
}