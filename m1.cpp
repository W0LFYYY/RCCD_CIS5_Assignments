/* 
 * File:   m1.cpp
 * Author: Brandon Kakudo
 * Created on January 28, 2023
 * Purpose:  Template to be used for all
 *           future Hmwk, Labs, Exams, Projects
 */

//System Libraries
#include <iostream>  //Input Output Library
using namespace std;

//Function Prototypes
void printCross(int n);
void printForwardSlash(int n);
void printBackwardSlash(int n);

//Execution begins here at main
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    char ch;
    
    //Initialize Variables
    cout<<"Create a numbered shape that can be sized."<<endl;
    cout<<"Input an integer number [1,50] and a character [x,b,f]."<<endl;
    cin>>num>>ch;
    
    //Map/Process the Inputs -> Outputs
    if(ch=='x' || ch=='X')
        printCross(num);
    else if(ch=='f' || ch=='F')
        printForwardSlash(num);
    else if(ch=='b' || ch=='B')
        printBackwardSlash(num);
    else
        cout<<"\nWrong input"<<endl;
    
    //Exit the Program
    return 0;
}
void printCross(int n){
    int i,j,k;
    if(n%2) //odd number of lines{
        for(int i=n;i>=1;i--){
            for(int j=n;j>=1;j--){
                if(j==i || j==(n-i+1))
                    cout<<j;
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    else //even number of lines{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==i || j==(n-i+1)){
                    cout<<" "<<j<<" ";
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
}

void printForwardSlash(int n){
    if(n%2){
        for(int i=n;i>=1;i--){
            for(int j=n;j>=1;j--){
                if(j==n-i+1){
                    cout<<j;
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    }
    else{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==(n-i+1)){
                    cout<<j;
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    }
}

void printBackwardSlash(int n){
    if(n%2) // odd number of lines{
        for(int i=n;i>=1;i--){
            for(int j=n;j>=1;j--){
                if(j==i){
                    cout<<j;
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
    else //even number of lines{
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(j==i){
                    cout<<j;
                }
                else
                    cout<<" ";
            }
            cout<<"\n";
        }
}