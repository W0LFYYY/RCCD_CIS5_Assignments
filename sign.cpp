/* 
 * File:   rpc.cpp
 * Author: Brandon Kakudo
 * Created on January 16, 2023
 * Purpose: Find the compatible 
 * horoscope signs
 * Scissors
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
    string s1, s2, t1, t2;
    
    //Initialize or input i.e. set variable values
    cout << "Horoscope Program which examines compatible signs." << endl;
    cout << "Input 2 signs." << endl;
    cin >> s1 >> s2;
    
    //Map inputs -> outputs         Find the type of sign
    t1 = (s1 == "Aries" || s1 == "Leo" || s1 == "Sagittarius")? "Fire":
         (s1 == "Taurus" || s1 == "Virgo" || s1 == "Capricorn")? "Earth":
         (s1 == "Gemini" || s1 == "Libra" || s1 == "Aquarius")? "Air":"Water";
         
    t2 = (s2 == "Aries" || s2 == "Leo" || s2 == "Sagittarius")? "Fire":
         (s2 == "Taurus" || s2 == "Virgo" || s2 == "Capricorn")? "Earth":
         (s2 == "Gemini" || s2 == "Libra" || s2 == "Aquarius")? "Air":"Water";
   
    //Display the outputs
     t1 == t2?
        cout << s1 << " and " << s2 << " are compatible " << t1 << " signs.":
        cout << s1 << " and " << s2 << " are not compatible signs.";
    
    //Exit stage right or left!
    return 0;
}