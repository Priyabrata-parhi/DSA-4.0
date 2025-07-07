#include <iostream>
using namespace std;

int main() {
    // variable
    int age = 25;
    cout << "Priyabrata Age is: " << age << endl;

    //declaration
    int age;
    cout << age;   // Random(garbase value) declaration case ma print hota hai

    // defination
    // int age = 21;
    // cout  << age << endl;
    
    // manipulation or opdation
    age = 101;
    cout << age << endl;

    // int
    int count = 5;
    // float
    float share = 3.141;
    // char
    char alphabet = 'z';
    // double
    double weight = 55.69887;   //std::cout display floating point data type with 6 digits . thats why 55.69887 rounded to 55.6989.
    //boolean
    bool ismale = true;
    bool ischild = 1;
    bool isFemale = false;
    bool isgirl = 0;

    cout << count << endl;
    cout << share << endl;
    cout << alphabet << endl;
    cout << weight << endl;
    cout << ismale << endl;

    return 0;

}