#include<iostream>
using namespace std;

int main(){

    // unary operator
    int a =5;
    cout << a << endl;
    cout << (++a) << endl;
    // a ki value 6 ho chuki ha
    cout << (a++) << endl;
    // print kara toh 6 hi print hoga, but a ki value 7 ban chuki ha
    cout << a << endl;
    // yaha tak a ki value 7 ban chuki ha
    cout << (--a) << endl;
     // a ki value 6 ho chuki ha
    cout << (a--) << endl;
    // print kara toh 6 hi print hoga, but a ki value 5 ban chuki ha
     cout << a << endl;


    //Arithmatic operator
     int A = 10;
     int B = 5;

     cout << (A+B) << endl;
     cout << (A-B) << endl;
     cout << (A*B) << endl;
     cout << (A/B) << endl;
     cout << (A%B) << endl;

    // Relational operator
     cout << (10 == 5) << endl;
     cout << (10 <=5 ) << endl;
     cout << ( 10 != 5) << endl;


    //logical operator
    bool cond1 = (10>5);   //true
    bool cond2 = (5>=5);   // true
    bool cond3 = (2!=2);  // false
    
    // and(&&) operator
    if(cond1 && cond2 && cond3){
        cout << "all conditon are true" << endl;
    }
    else{
        cout << "all condition are not true" << endl;   // exicute 2nd --> and(&&) opreator are use 1 conditon are false then all conditon are false
    }

    // or(||) opereator
    if(cond1 || cond2 || cond3){
        cout << "atleast one condition is true";
    }
    else{
        cout << "all condition are flase";
    }

    // not(!) operator
    bool condition = (5!=10);    // true
    cout << !condition << endl;  // output --> false




    // Assignment operator
    int arr = 5;
    cout << arr << endl;

    // arr = arr + 10;
    arr += 10;

    // arr = arr * 10;
    arr *= 10;

    

    //Bitwise operator
    cout << (5&4) << endl;  //bit-wise and(&)
    cout << (5|4) << endl;  //bit-wise or(|)
    cout << (~1)  << endl;  //bit-wise not(~) --> tilda kaha ta ha  --> output -2
    return 0;
}