/* 
 * File:   m2.cpp
 * Author: Brandon Kakudo
 * Created on January 4, 2023, 11:03 AM
 * Purpose:  Template to be used for all
 *           future Hmwk, Labs, Exams, Projects
 */

#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char num1, num2, num3, num4;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin >> num1 >> num2 >> num3 >> num4;
    
    //Histogram Here
    if (num1 >= '0' && num1 <= '9')
    {
        cout << num1 << " ";
        for (int i = 0; i < num1 - '0'; i++)
            cout << "*";
        cout << endl;
    }
    else
    {
        cout << num1 << " ?" << endl;
    }

    if (num2 >= '0' && num2 <= '9')
    {
        cout << num2 << " ";
        for (int i = 0; i < num2 - '0'; i++)
            cout << "*";
        cout << endl;
    }
    else
    {
        cout << num2 << " ?" << endl;
    }

    if (num3 >= '0' && num3 <= '9')
    {
        cout << num3 << " ";
        for (int i = 0; i < num3 - '0'; i++)
            cout << "*";
        cout << endl;
    }
    else
    {
        cout << num3 << " ?" << endl;
    }

    if (num4 >= '0' && num4 <= '9')
    {
        cout << num4 << " ";
        for (int i = 0; i < num4 - '0'; i++)
            cout << "*";
        cout << endl;
    }
    else
    {
        cout << num4 << " ?" << endl;
    }
    
    //Exit
    return 0;
}