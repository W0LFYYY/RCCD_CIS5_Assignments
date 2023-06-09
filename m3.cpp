/* 
 * File:   m3.cpp
 * Author: Brandon Kakudo
 * Created on January 28, 2023
 * Purpose:  Template to be used for all
 *           future Hmwk, Labs, Exams, Projects
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstring>   //String Object
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare all Variables Here
    int n1000s, n100s, n10s, n1s;
    unsigned short numb;
    string cnvrt = ""; 
    
    //Initialize Variables
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>numb;
    
    //convert digits
    n1000s = numb / 1000;
    n100s = (numb - n1000s * 1000) / 100;
    n10s = numb % 100/ 10;
    n1s = numb % 10;
    
    //Map inputs/known to the output
    //convert the 1000s
    cnvrt += n1000s == 3? "Three Thousand " :
             n1000s == 2? "Two Thousand " :
             n1000s == 1? "One Thousand " : "";
    
    //convert the 100s
    cnvrt += n100s == 9? "Nine Hundred " :
             n100s == 8? "Eight Hundred " :
             n100s == 7? "Seven Hundred " : 
             n100s == 6? "Six Hundred " :
             n100s == 5? "Five Hundred " :
             n100s == 4? "Four Hundred " :
             n100s == 3? "Three Hundred " :
             n100s == 2? "Two Hundred " :
             n100s == 1? "One Hundred " : "";
    
    //convert the 10s
    cnvrt += n10s == 9? "Ninety " :
             n10s == 8? "Eighty " :
             n10s == 7? "Seventy " : 
             n10s == 6? "Sixty " :
             n10s == 5? "Fifty " :
             n10s == 4? "Forty " :
             n10s == 3? "Thirty " :
             n10s == 2? "Twenty " :
             n10s == 1? "ten " : "";
    
    //convert the 1s
    cnvrt += n1s == 9? "Nine " :
             n1s == 8? "Eight " :
             n1s == 7? "Seven " : 
             n1s == 6? "Six " :
             n1s == 5? "Five " :
             n1s == 4? "Four " :
             n1s == 3? "Three " :
             n1s == 2? "Two " :
             n1s == 1? "One " : "";
    
    //Display Inputs/Outputs
    cout<< cnvrt;
    cout <<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}