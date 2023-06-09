//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants Only!

//Function Prototypes
void Menu();
int  getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void printCross(int n);
void printForwardSlash(int n);
void printBackwardSlash(int n);
float packA(int hrsA);
float packB(int hrsB);
float packC(int hrsC);
float findPay(float rate, float hrs);
float factorial(int n);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set a Random number seed here.
    
    //Declare Main variables here.
    int inN;
    
    //Loop on each problem
    do{
        Menu();
        inN=getN();
        switch(inN){
            case 1:    problem1();break;
            case 2:    problem2();break;
            case 3:    problem3();break;
            case 4:    problem4();break;
            case 5:    problem5();break;
            case 6:    problem6();break;
            default:   def(inN);
	}
    }while(inN<7);

    //Exit Stage Right Here!
    return 0;
}

void Menu(){
    cout<<endl;
    cout<<"Type 1 to execute Problem 1"<<endl;
    cout<<"Type 2 to execute Problem 2"<<endl;
    cout<<"Type 3 to execute Problem 3"<<endl;
    cout<<"Type 4 to execute Problem 4"<<endl;
    cout<<"Type 5 to execute Problem 5"<<endl;
    cout<<"Type 6 to execute Problem 6"<<endl;
    cout<<"Type anything else to exit."<<endl<<endl;
}

int  getN(){
    int inN;
    cin>>inN;
    return inN;
}

void def(int inN){
    cout<<endl<<"Typing "<<inN<<" exits the program."<<endl;
}

void problem1(){
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
    
}

void problem2(){
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
}

void problem3(){
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
}

void problem4(){
     //Declare all Variables Here
    char pckge;
    int hrs;
    float cost, a, b, c;
    
    //Initialize Variables
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>pckge>>hrs;
    
    //Map/Process the Inputs -> Outputs
    switch(pckge){
        case 'A':
        case 'a': cost = packA(hrs); break;
        
        case 'B':
        case 'b': cost = packB(hrs); break;
        
        case 'C':
        case 'c': cost = packC(hrs); break;
    }
    
  a =  packA(hrs);
  b = packB(hrs);
  c = packC(hrs);
  
   char chpst = 'A';
   if (b < a && b < c) {
        chpst = 'B';
    } 
    else if (c < a && c < b) {
        chpst = 'C';
    }
    
    float save = 0;
    if (chpst == 'B') {
        save = a - b;
    } else if (chpst == 'C') {
        if (a < b) {
            save = a - c;
        } else {
            save = b - c;
        }
    }
   
    //Display Inputs/Outputs
    cout << fixed << setprecision(2) << "$" << cost << " " << chpst << " $" << save << endl;
}

void problem5(){
    //Declare all Variables Here
    float payRate, pay;
    unsigned short hrsWrkd;
    
    //Input or initialize values Here
    cout<<"Paycheck Calculation."<<endl;
    cout<<"Input payRate in $'s/hour and hours worked"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Output the check
    pay = findPay(payRate, hrsWrkd);
    cout << "$" << fixed << setprecision(2) << pay << endl;
}

void problem6(){
     //Declare all Variables Here
    float x, fx = 0;
    int terms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>terms;
    
    //Calculate Sequence sum here
    for (int i = 0; i < terms; i++) {
    double term = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    fx += term;
    }
    
    //Output the result here
    cout <<fixed << setprecision(6) << showpoint;
    cout << fx << endl;
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
float packA(int hrsA) {
    float costA = 16.99;
    int xtrHrsA;
    if (hrsA > 10) {
        xtrHrsA = hrsA - 10;
        if (xtrHrsA > 10) {
            costA += 10 * 0.95 + (xtrHrsA - 10) * 0.85;
        } else {
            costA += xtrHrsA * 0.95;
        }
    }
    return costA;
}

float packB(int hrsB) {
    float costB = 26.99;
    if (hrsB > 20) {
        int xtrHrsB = hrsB - 20;
        if (xtrHrsB > 10) {
            costB += 10 * 0.74 + (xtrHrsB - 10) * 0.64;
        } else {
            costB += xtrHrsB * 0.74;
        }
    }
    return costB;
}

float packC(int hrsC) {
    return 36.99;
}
float findPay(float rate, float hrs) {
    float pay = 0;
    if (hrs <= 20) {
        pay = rate * hrs;
    } else if (hrs > 20 && hrs <= 40) {
        pay = rate * 20 + (hrs - 20) * rate * 1.5;
    } else {
        pay = rate * 20 + 20 * rate * 1.5 + (hrs - 40) * rate * 2;
    }
    return pay;
}
float factorial(int n) {
  float rslt = 1;
  for (int i = 1; i <= n; i++) {
    rslt *= i;
  }
  return rslt;
}
