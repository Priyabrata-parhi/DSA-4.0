#include<iostream>
using namespace std;

int main(){
       
    int age = 12;
     // Ternary operator
    (age > 18) ? cout << "can vote" : cout << "cannot vote";

   
    int x = 10;
    int y = 20;
    int result = (x > y) ? x : y;
    cout << "Results" << result << endl;

    return 0;
}