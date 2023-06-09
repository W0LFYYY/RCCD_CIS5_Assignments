/* 
 * File:   truthTable.cpp
 * Author: Brandon Kakudo
 * Created on January 4, 2023, 11:03 AM
 * Purpose:  Finish the Truth Table
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
#include <fstream>   //File I/O Library
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions
//Function Prototypes

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    bool x,y;
    
    //Heading
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y  ETC.... 13 COLUMNS"<<endl<<endl;
    
    //Row 1
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<(x^y^y?'T':'F')<<"  ";
    cout<<(x^y^x?'T':'F')<<"   ";
    cout<<((!(x&&y))?'T':'F')<<" ";
    cout<<(((!x)||(!y))?'T':'F')<<"  ";
    cout<<((!(x||y))?'T':'F')<<"  ";
    cout<<(((!x)&&(!y))?'T':'F')<<"   ";
    cout<<endl;
            
    //Row 2
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<(x^y^y?'T':'F')<<"  ";
    cout<<(x^y^x?'T':'F')<<"   ";
    cout<<((!(x&&y))?'T':'F')<<" ";
    cout<<(((!x)||(!y))?'T':'F')<<"  ";
    cout<<((!(x||y))?'T':'F')<<"  ";
    cout<<(((!x)&&(!y))?'T':'F')<<"   ";
    cout<<endl;
    
    //Row 3
    x=false;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<(x^y^y?'T':'F')<<"  ";
    cout<<(x^y^x?'T':'F')<<"   ";
    cout<<((!(x&&y))?'T':'F')<<" ";
    cout<<(((!x)||(!y))?'T':'F')<<"  ";
    cout<<((!(x||y))?'T':'F')<<"  ";
    cout<<(((!x)&&(!y))?'T':'F')<<"   ";
    cout<<endl;
    
    //Row 4
    x=false;
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<" ";
    cout<<(x^y?'T':'F')<<"  ";
    cout<<(x^y^y?'T':'F')<<"  ";
    cout<<(x^y^x?'T':'F')<<"   ";
    cout<<((!(x&&y))?'T':'F')<<" ";
    cout<<(((!x)||(!y))?'T':'F')<<"  ";
    cout<<((!(x||y))?'T':'F')<<"  ";
    cout<<(((!x)&&(!y))?'T':'F')<<"   ";
    cout<<endl;
    //Exit the Program
    return 0;
}