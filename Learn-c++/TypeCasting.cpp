#include<iostream>
using namespace std;
int main(){

    // // IMPLICIT CASTING
    // // 1. --> int to float
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + num2;  // implicit conversion of num1 from int to flat
    // cout << result << endl;


    // // 2. --> char to int
    // char ch ='A';
    // int a = ch + 1;    // implicit conversion from char to int
    // cout << a << endl;


    // // 3. --> int to  char 
    // int a = 98;
    // char ch = a;       // implicit conversion from int to char 
    // cout << ch << endl;


    // //  1. --> Explicit casting 
    // double pi = 3.141159265;
    // int intpi = (int)pi;   // Explicit casting from double to int
    // cout << intpi << endl;


      // // 2. --> Explicit casting 
    //   float floatingNumber = 65.35;
    //   char charValue = (char)floatingNumber; // Explicit casting from float to char
    //   cout << charValue << endl;


    // 3. --> int to float
    int a = 10;
    int b = 3.0;  // float b = 3.0  --> it return float
    // float c = a / b;   // Explicit casting from int to float --> it store intiger
    float c = a / ((float)b);  // Explicit casting from int to float --> it store float
    cout << c << endl;



}