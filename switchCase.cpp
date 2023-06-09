/* 
 * File:   main.cpp
 * Author: mlehr
 * Created on January 12th, 2023, 9:55 AM
 * Purpose:  Menu Template without Loops
 */

//System Libraries
#include <iostream>  //Input Output Library
#include <cmath>     //Math Library
#include <cstdlib>   //Random number functions
#include <ctime>     //Time to set Random number seed
#include <cstring>   //String Object
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants not Variables
//Science, Math, Conversions, Dimensions

//Function Prototypes
void Mpg(int liters, int miles, const float Gpl);
float Mpg1(int liters1, int miles1, const float Gpl1);
float Mpg2(int liters2, int miles2, const float Gpl2);
void inf(float i1, float i2);
float inf2(float i1, float i2);
void year(float it1, float iRate);

//Execution begins here at main
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare Variables
    char chose;
    
    //Initialize Variables
    cout<<"This program presents a menu of options"<<endl;
    cout<<"0 To run Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
    cout<<"1 To run Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
    cout<<"2 To run Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
    cout<<"3 To run Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
    cout<<"4 To run Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
    cout<<"5 To run Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
    cout<<"6 To run Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl;
    cout<<"7 To run Savitch_9Ed_Chap4_Prob4_Inflation"<<endl;
    cout<<"8 To run Savitch_9Ed_Chap4_Prob5_EstCost"<<endl;
    cout<<"9 To run Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl;
    cin>>chose;
    
    //Map/Process the Inputs -> Outputs
    switch(chose){
        case '0':{
            cout<<"This problem is Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
            //Declare Variables
            int nmbr, sum = 0;
    
            //Map/Process the Inputs -> Outputs
            cin >> nmbr;

            for(int i = 1; i <= nmbr; i++)
                sum = sum + i;
            cout << "Sum = " << sum;
        break;
        }
        case '1':{
            cout<<"This problem is Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
            //Declare Variables
            int days,
                payDay = 0,
                pnny = 1;

            //Initialize or input i.e. set variable values
            cin >> days;

            while(days<1){
                cout << "You must enter a value greater than 1.";
                cin >> days;
            }

            //Map inputs -> outputs
            for(int i = 0; i < days; i++){
                payDay += pnny;     //add pay to total
                pnny *= 2;          //double pay each day
            }

            //Display the outputs
            cout << "Pay = $" << fixed << setprecision(2) << setw(4) << payDay * .01;       //.01 conversion for penny
        break;
        }
        case '2':{
            cout<<"This problem is Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
            int max = 0,
            num = 0,
            min = 1000000;

            //Initialize or input i.e. set variable values
            while(num!=-99){
                cin >> num;
                if(num==-99)break;      //break stops -99 from being used as an integer 
                if(num>max){max=num;}   //Find largest number
                if(num<min){min=num;}   //Find smallest number
            }

            //Display the outputs
            cout << "Smallest number in the series is " << min << endl;
            cout << "Largest  number in the series is " << max;
        break;
        }
        case '3':{
            cout<<"This problem is Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
            //Declare
            char lttr;
            int num;

            //Initialize or input i.e. set variable values
            cin >> num;
            cin >> lttr;

            //Map inputs -> outputs
            while(num<0 || num>15){
                cout << "Please enter a number between 1 & 15" << endl;
                cin >> num;
            }

            for(int i = 0; i < num; i++)
            {
                for(int k = 0; k < num; k++){
                    cout << lttr;
                }
                if((i+1) < num){
                    cout << endl;
                }
            } 
        break;
        }
        case '4':{
            cout<<"This problem is Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
            unsigned short num;
            
            //Initialize or input i.e. set variable values
            cin >> num;

            //Map inputs -> outputs
            for(int i = 0; i<num; i++){ 
                for(int k = 0; k<=i; k++){
                    cout << "+";
                }
                cout<<endl;
                cout<<endl;
            }
            for(int i = 0; i < num; i++){
                for(int k = num; k>i; k--){
                    cout << "+";
                }
                if(i != num - 1){
                    cout<<endl;
                    cout<<endl;
                }
            }
        break;
        }
        case '5':{
            cout<<"This problem is Savitch_9thEd_Chap4_Prob1_MPG"<<endl;
            const float GALPERL = 0.264179;

            int ltrs;
            int dist;
            char choice;

            //Map inputs -> outputs
            do{
                cout << "Enter number of liters of gasoline:" << endl;
                cout << endl;
                cin >> ltrs;
                cout << "Enter number of miles traveled:" << endl;
                cout << endl;
                cin >> dist;
                Mpg(ltrs, dist,  GALPERL);
                cout << "Again:" << endl;
                cin >> choice;
                if(choice == 'y' || choice == 'Y'){
                    cout << endl;
                }
                }while(choice == 'y' || choice == 'Y');
        break;
        }
        case '6':{
            cout<<"This problem is Savitch_9Ed_Chap4_Prob2_FuelEff"<<endl;
            //Declare Variables
            const float GALPERL = 0.264179;

            int ltrs, dist;
            char choice;
            float C1, C2;

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
        break;
        }
        case '7':{
            cout<<"This problem is Savitch_9Ed_Chap4_Prob4_Inflation"<<endl;
            //Declare Variables
            char choice;
            float item1, item2;

            //Map inputs -> outputs
             do{
                    cout << "Enter current price:" << endl;
                    cin >> item1;
                    cout << "Enter year-ago price:" << endl;
                    cin >> item2;
                    inf(item1, item2);
                    cout << endl;
                    cout << "Again:" << endl;
                    cin >> choice;

                    if(choice == 'y' || choice == 'Y'){
                      cout << endl;
                    }
                }

                while((choice == 'y' || choice == 'Y'));
            break;
            }
        case '8':{
            cout<<"This problem is Savitch_9Ed_Chap4_Prob5_EstCost"<<endl;
            //Declare Variables
            char choice;
            float item1, item2, infRate;

            //Map inputs -> outputs
             do{
                cout << "Enter current price:" << endl;
                cin >> item1;
                cout << "Enter year-ago price:" << endl;
                cin >> item2;

                infRate = inf2(item1, item2);
                cout << endl;
                year(item1, infRate);
                cout << endl;

                cout << "Again:" << endl;
                cin >> choice;

                if(choice == 'y' || choice == 'Y'){
                  cout << endl;
                }
            }

            while((choice == 'y' || choice == 'Y')); 
        break;
        }
        case '9':{
            cout<<"This problem is Savitch_9Ed_Chap4_Prob9_2or3Max"<<endl;
            float num1, num2, num3, maxNum, maxNum2;
    
            //Initialize or input i.e. set variable values
            cout << "Enter first number:" << endl << endl;
            cin >> num1;
            cout << "Enter Second number:" << endl << endl;
            cin >> num2;
            cout << "Enter third number:" << endl << endl;
            cin >> num3;

            if (num1 > num2){
                maxNum = num1;
            }
            else{
                maxNum = num2;
            }
            if(num1>num3 && num1>num2){
                maxNum2 = num1;
            }
            else  if(num2>num1 && num2>num3){
                maxNum2 = num2;
            }
            else{
                maxNum2 = num3;
            }

            //Display the outputs
            cout << "Largest number from two parameter function:" << endl;
            cout << fixed << setprecision(1) << maxNum << endl << endl;
            cout << "Largest number from three parameter function:" << endl;
            cout << fixed << setprecision(1) << maxNum2 << endl;
        break;
        }
    }
    //Exit the Program
    return 0;
}

void Mpg(int liters, int miles, const float Gpl){
            float totalMpg;
            totalMpg = miles / (liters * Gpl);
            cout << "miles per gallon:" << endl;
            cout << fixed << setprecision(2) << totalMpg << endl;
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
void inf(float i1, float i2){
  float rate;
  rate = (i1 - i2) / i2;
  rate = rate * 100;
  cout << "Inflation rate: " << fixed << setprecision(2) << rate << "%" << endl;
}
float inf2(float i1, float i2){
  float rate;
  rate = (i1 - i2) / i2;
  rate = rate * 100;
  cout << "Inflation rate: " << fixed << setprecision(2) << rate << "%" << endl;
  return rate;
}
void year(float it1, float iRate){
    float p1;
    float p2;
    iRate = iRate/100;
    p1 = (iRate * it1) + it1;
    cout << "Price in one year: $" << p1 << endl;
    p2 = (iRate * p1) + p1;
    cout << "Price in two year: $" << p2 << endl;
}