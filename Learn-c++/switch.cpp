#include<iostream>
using namespace std;

int main(){
    char grade;
    cout << "Enter your grade" << endl;
    cin >> grade;

    switch(grade) {
        case 'A': cout << "Your marks will be in range of 90 to 100" << endl;
        break;
        case 'B': cout << "Your marks will be in range of 80 to 90" << endl;
        break;
        case 'C': cout << "Your marks will be in range of 70 to 80" << endl;
        break;
        case 'D': cout << "Your marks will be in range of 60 to 70" << endl;
        break;
        default : cout << "Your marks will be in range of 0 to 50" << endl;
    }

     int age = 12;
     switch(age > 10) {
        case 1 : cout << "true";
        case 0 : cout << "false" << endl;
     }

    return 0;
}