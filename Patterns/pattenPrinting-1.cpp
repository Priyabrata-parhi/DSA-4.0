#include<iostream>
using namespace std;

// global variable
// int a = 5;

void printMantu(){
    cout << "My Name is priyabrata" << endl;
}

void checkEvenOdd(int num) {

  //to check even, logic %2 == 0 -> even else odd
  if(num % 2 == 0) {
    cout << "Even Number" << endl;
  }
  else {
    cout << "Odd Number" << endl;
  }

}

void checkPositiveOrNegativeOrZero(int num) {
  if(num > 0) {
    cout << "positive" << endl;
  }
  else if(num < 0) {
    cout << "Negative" << endl;
  }
  else {
    cout << "Zero" << endl;
  }
}

//lets find the average of 3 numbers
int printAverage(int a, int b, int c){
    int avg = (a+b+c)/3;
    return avg;
}

//lets waf that print counting from 1 to n 
void printCounting(int n) {
  for(int i=1; i<=n; i++) {
    cout << i << " ";
  }
  cout << endl;
}

void printTable(int num){
    for(int i=1; i<=10; i++){
        cout << (num*i) << endl;
    }
}

//waf that convert a upper case character into a loweer casxe character
void convertToLC(char ch){
    char ans = ch - 'A' + 'a';
    cout << "Lower case character: " << ans << endl;
}

void convertToUC(char ch){
    char ans = ch - 'a'+'A';
    cout << "Upper case character: " << ans << endl;
}

int main(){
//    // local variable
//    int a = 6;
//    cout << a << endl;
//    {
//     //block-scope variable
//     int a = 7;
//     cout << a << endl;
//    }

    // int a = 5;
    // {
    //     int a = 6;
    //     // cout << a;
    // }
    // cout << a << " ";


    // function call
    printMantu();
    checkEvenOdd(15);
    checkPositiveOrNegativeOrZero(-78);
    int  answer = printAverage(10,20,30);
    cout << "answer : " << answer << endl;
    printCounting(10);
    printTable(2);
    convertToLC('Z');
    convertToUC('d');
    return 0;
}