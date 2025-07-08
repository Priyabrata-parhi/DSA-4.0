#include<iostream>
using namespace std;

int main(){

    int budget;
    cout << "Enter your Budget" << endl;

    //input
    cin >> budget;

    if (budget > 200000)
    {
       cout << "You can buy Scorpio" << endl;
    }
    else{
        cout << "You cannot buy Scorpio" << endl;
    }

    // if-else condition
    int age = 100;
    if (age > 18)
    {
        cout << "you can vote" << endl;
    }
    else{
        cout << "you cannot vote" << endl;
    }
    
    //if-else  else-if block
    int marks = 75;

    if(marks > 90){
       cout << "A";
    }
    else if(marks > 80){
       cout << "B";
    }
    else if(marks > 70){
       cout << "C";
    }
    else if(marks > 60){
       cout << "D";
    }
    else {
        cout << "You failed";
    }

    // Nested-if

    int height;
    cout << "Enter height in feet " << endl;
    cin >> height;

    int weight;
    cout << "Enter your weight:" << endl;
    cin >> weight;

    if(height > 6 ) {

        if(weight > 70 ){
            cout << "Enrolled" << endl;
        }
        else{
            cout << "dismies" << endl;
        }
    }

    else{
        cout << "disqualify" << endl;
    }

}