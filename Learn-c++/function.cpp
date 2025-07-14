#include<iostream>
using namespace std;


    // FUNCTION 
// // Non-void function
// int sum(int a, int b){
//     int totalsum = a + b;
//     return totalsum;
// }

//  //void function
//   void printMyName();  // function-declaration

// int main(){
//     int ans = sum(5, 10);
//     cout << ans << endl;

//     //functionCall
//     printMyName();


//     return 0;
// }

// void printMyName(){
//     cout << "Priyabrata" << endl;
//   }



int getmultiplication(int x,int y, int z){
    int result = x * y * z;
    return result;
}

void printNameTenTimes(){
    for(int i=1; i<=10; i++){
       cout << "Priyabrata" << endl;
    }
}

void printMultiple(int num){
    for(int i=1; i<=10; i++){
       cout << num * i << endl;
    }
}

int convertIntoCelcius(int far){
    int celcius = (far - 32)*5/9;
    return celcius;
}

char convertIntoUpperCase(char ch){
    char answer = ch -'a'+ 'A';
    return answer;
}

int main(){
   
    // function call
    int multiplicationAnswer =  getmultiplication(5,4,3);
    cout <<  multiplicationAnswer << endl;


    printNameTenTimes();

    int m = 5;
    printMultiple(m);

    int far = 32;
    int ans = convertIntoCelcius(far);
    cout << "In celcius: " << ans << endl;

    char result = convertIntoUpperCase('k');
    cout << result << endl;

    return 0;
}