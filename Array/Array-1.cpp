#include <iostream>
using namespace std;

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i <= 10; i++)
//     {
//         cout << arr[i] << ", ";
//     }
//     cout << endl;
// }

// void printArray(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << ", ";
//     }
//     cout << endl;
// }


    // void printArray(int arr[], int size) {
    //     for(int i=0; i<size; i++) {
    //         cout << arr[i] << " , ";
    //     }
    //     cout << endl;
    // }


    // // function to print twice of the original number
    // void printTwice(int arr[], int size){
    //     for(int i=0; i<=size-1; i++){
    //         cout << (2*arr[i]) << " , ";
    //     }
    // }


    // void printEvenodd(int arr[], int size){
    //     for(int i=0; i<size; i++){
    //         int number = arr[i];

    //         if(number % 2 == 0) {
    //             cout << "Even ";
    //         }
    //         else{
    //             cout << "odd ";
    //         }

    //     }
    // }


    void CountZeroOnes(int arr[], int size){
        int totalZero = 0;
        int totalOne = 0; 
        for(int i=0; i<size; i++){
            int number = arr[i];

            if(number == 0){
                totalZero++;
            }
            else if(number == 1) {
                totalOne++;
            }
        }
        cout << "Total zero : " << totalZero << endl;
        cout << "Total ones : " << totalOne << endl;
    }

int main()
{

    //   int arr[10];          // garbage value print value assign kara jaine

    //  printArray(arr,10);   // garbage value print value assign kara jaine

    // int arr[5] = {1, 2, 3, 4, 5};
    // printArray(arr, 5);

    // int arr[5] = {10,30};    // baki 3 space ma 0 print hoga
    // int arr[5] = {1};

    // int arr[] = {10,20,30};  Explicit function automatically bata diya



    // int arr[5] = {11, 23, 35, 65, 77};
    // int size = 5;
    // // observation -> index -> 0 -> <size -> [0 -> size-1]
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " , ";
    // }


//     //declare
//     int arr[10];
//   //   cout << arr; // base adress show kare ga
//     cout << " enter the value of n (n= number of values to take input for)" << endl;
//     int n;
//     cin >> n;

//     for(int i=0; i<n; i++){
//         cout << "Taking input for index: " << i << endl;
//         cin >> arr[i];
//     }

//     cout << "Printing the array " << endl;
//     for(int i=0; i<10; i++){
//         cout << arr[i] << " ,";
//     }
//     cout << endl;



    // int arr[10] = {11,12,13,14,15};
    int arr[10] = {1,1,0,1,0};
    int size = 5;
    // int capacity = 10;

    // printArray(arr,size);
    // printTwice(arr,size);
    // printEvenodd(arr,size);
     CountZeroOnes(arr,size);





    return 0;
}