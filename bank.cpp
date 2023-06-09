/* 
 * File:   race.cpp
 * Author: Brandon Kakudo
 * Created on January 16, 2023
 * Purpose:  Figure out what place
 * each of the runners got
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
    string n1, n2, n3;
    int t1, t2, t3;
    
    //Initialize or input i.e. set variable values
    cout << "Race Ranking Program" << endl;
    cout << "Input 3 Runners" << endl;
    cin >> n1 >> t1 >> n2 >> t2 >> n3 >> t3;
    cout << "Their names, then their times" << endl;
    
    //Map inputs -> outputs
    if(t1<t2 && t2<t3){
        cout << n1 << "\t" << setw(3) << t1 << endl;
        cout << n2 << "\t" << setw(3) << t2 << endl;
        cout << n3 << "\t" << setw(3) << t3;
    }
    if(t1<t3 && t3<t2){
        cout << n1 << "\t" << setw(3) << t1 << endl;
        cout << n3 << "\t" << setw(3) << t3 << endl;
        cout << n2 << "\t" << setw(3) << t2;
    }
    if(t2<t1 && t1<t3){
        cout << n2 << "\t" << setw(3) << t2 << endl;
        cout << n1 << "\t" << setw(3) << t1 << endl;
        cout << n3 << "\t" << setw(3) << t3;
    }
    if(t2<t3 && t3<t1){
        cout << n2 << "\t" << setw(3) << t2 << endl;
        cout << n3 << "\t" << setw(3) << t3 << endl;
        cout << n1 << "\t" << setw(3) << t1;
    }
    if(t3<t1 && t1<t2){
        cout << n3 << "\t" << setw(3) << t3 << endl;
        cout << n1 << "\t" << setw(3) << t1 << endl;
        cout << n2 << "\t" << setw(3) << t2;
    }
    if(t3<t2 && t2<t1){
        cout << n3 << "\t" << setw(3) << t3 << endl;
        cout << n2 << "\t" << setw(3) << t2 << endl;
        cout << n1 << "\t" << setw(3) << t1;
    }
    
    //Exit stage right or left!
    return 0;
}