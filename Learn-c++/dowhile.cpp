#include<iostream>
using namespace std;

int main(){

    // for-loop 
    // for( int i=1; i<=10; i++){
    //     cout << i << endl;
    // }
    // cout << endl;


   // do-while loop
    int i = 1;
    do{
       //logic
       cout << i << " ";
       //updation
       i = i + 1;

    }while(i <= 5);
    

    //do-while loop
    // int count = 20;
    // int i = 1;
    // do{
    //     cout << "priyabrata" << endl;
    //     i = i+1;
    // }while(i <= count);


    // Nested-loop
    for( int i=1; i<=3; i++){
        for( int j=1; j<=3; j++){
            cout << i << j << " ";
        }
        cout << endl;
    }

    // for( int i=1; i<=2; i++){
    //     for(int j=1; j<=2; j++){
    //         cout << i*j << " ";
    //     }
    // }

    

}