/* 
 * File:   signs.cpp
 * Author: Brandon Kakudo
 * Created on January 18, 2023
 * Purpose: Roman Numeral Conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries
//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int n1000s, n100s, n10s, n1s;
    unsigned short arabic;
    string roman = "";

    //Initialize Variables here
    cout << "Arabic to Roman numeral conversion." << endl;
    cout << "Input the integer to convert." << endl;
    cin >> arabic;
    //convert digits
    n1000s = arabic / 1000;
    n100s = (arabic - n1000s * 1000) / 100;
    n10s = arabic % 100/ 10;
    n1s = arabic % 10;

    //Map inputs/known to the output
    //convert the 1000s
    switch(n1000s){
        case 3: roman += "M";
        case 2: roman += "M";
        case 1: roman += "M";
    }
    //convert the 100s
    switch(n100s){
        case 9:{
            roman += "C";
            roman += "M";break;
        }
        case 8: case 7: case 6:{
            roman += "D";
            for (int i = 0; i < n100s - 5; i++) roman += "C";break;
        }
        case 5:{
            roman += "D";break;
        }
        case 4:{
            roman += "C";
            roman += "D";break;
        }
        case 3: case 2: case 1:{
            for (int i = 0; i < n100s; i++) roman += "C";break;
        }

    }
    //convert the 10s
     switch(n10s){
        case 9:{
            roman += "X";
            roman += "C";break;
        }
        case 8: case 7: case 6:{
            roman += "L";
            for (int i = 0; i < n10s - 5; i++) roman += "X";break;
        }
        case 5:{
            roman += "L";break;
        }
        case 4:{
            roman += "X";
            roman += "L";break;
        }
        case 3: case 2: case 1:{
            for (int i = 0; i < n10s; i++) roman += "X";break;
        }
    }
    //convert the 1s
    switch(n1s){
        case 9:{
            roman += "I";
            roman += "X";break;
        }
        case 8: case 7: case 6:{
            roman += "V";
            for (int i = 0; i < n1s - 5; i++) roman += "I";break;
        }
        case 5:{
            roman += "V";break;
        }
        case 4:{
            roman += "I";
            roman += "V";break;
        }
        case 3: case 2: case 1:{
            for (int i = 0; i < n1s; i++) roman += "I";break;
        }
    }

    //Display Output
    arabic < 1000 || arabic > 3000?
        cout << arabic << " is Out of Range!":
        cout << arabic << " is equal to " << roman;
    
    //Exit stage right or left!
    return 0;
}