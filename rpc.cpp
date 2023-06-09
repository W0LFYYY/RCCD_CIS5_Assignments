/* 
 * File:   rpc.cpp
 * Author: Brandon Kakudo
 * Created on January 16, 2023
 * Purpose: A game of Rock, Paper,
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
    char p1, p2;
    
    //Initialize or input i.e. set variable values
    cout << "Rock Paper Scissors Game" << endl;
    cout << "Input Player 1 and Player 2 Choices" << endl;
    cin >> p1 >> p2;
    
    //Map inputs -> outputs
    if((p1 == 'P' || p1 == 'p') && (p2 == 'R' || p2 == 'r'))
        cout << "Paper covers rock.";
    else if((p1 == 'R' || p1 == 'r') && (p2 == 'P' || p2 == 'p'))
        cout << "Paper covers rock.";
    else if((p1 == 'R' || p1 == 'r') && (p2 == 'S' || p2 == 's'))
        cout << "Rock breaks scissors.";
    else if((p1 == 'S' || p1 == 's' && p2 == 'R' || p2 == 'r'))
        cout << "Rock breaks scissors.";
    else if((p1 == 'S' || p1 == 's' && p2 == 'P' || p2 == 'p'))
        cout << "Scissors cuts paper.";
    else if((p1 == 'P' || p1 == 'p' && p2 == 'S' || p2 == 's'))
        cout << "Scissors cuts paper.";
    else
        cout << "Nobody wins.";
    
    //Exit stage right or left!
    return 0;
}