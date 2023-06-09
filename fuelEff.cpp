/* 
 * File:   fualEff.cpp
 * Author: Brandon Kakudo
 * Created on January 22, 2023
 * Purpose: Determine which car has
 * the best fuel efficiency
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries
//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
float Mpg1(int liters1, int miles1, const float Gpl1);
float Mpg2(int liters2, int miles2, const float Gpl2);

int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    const float GALPERL = 0.264179;

    int ltrs, dist;
    char choice;
    float C1, C2;
    
    //Initialize or input i.e. set variable values
    
    
    //Map inputs -> outputs
    do{
            cout << "Car 1" << endl;
            cout << "Enter number of liters of gasoline:" << endl;
            cin >> ltrs;
            cout << "Enter number of miles traveled:" << endl;
            cin >> dist;
            C1 = Mpg1(ltrs, dist,  GALPERL);
            
            cout << "Car 2" << endl;
            cout << "Enter number of liters of gasoline:" << endl;
            cin >> ltrs;
            cout << "Enter number of miles traveled:" << endl;
            cin >> dist;
            C2 = Mpg2(ltrs, dist,  GALPERL);
            
            
            (C1 > C2)? cout << "Car 1 is more fuel efficient" << endl << endl :
                       cout << "Car 2 is more fuel efficient" << endl << endl;
            
            cout << "Again:" << endl;
            cin >> choice;
            if(choice == 'y' || choice == 'Y'){
                cout << endl;
            }
            }while(choice == 'y' || choice == 'Y');
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}

float Mpg1(int liters1, int miles1, const float Gpl1){
    float totalMpg1;
    totalMpg1 = miles1 / (liters1 * Gpl1);
    cout << "miles per gallon: ";
    cout << fixed << setprecision(2) << totalMpg1 << endl;
    cout << endl;
    return totalMpg1;
    
}

float Mpg2(int liters2, int miles2, const float Gpl2){
    float totalMpg2;
    totalMpg2 = miles2 / (liters2 * Gpl2);
    cout << "miles per gallon: ";
    cout << fixed << setprecision(2) << totalMpg2 << endl;
    cout << endl;
    return totalMpg2;
}