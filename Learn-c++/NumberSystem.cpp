#include <iostream>
#include <cmath>
using namespace std;

// int decimalToBinaryMethod1(int n){
//     // devision Method
//     while (n > 0)
//     {
//         int bit = n % 2;
//         cout << bit << endl;
//         n = n / 2;
//     }
//    return 0;   
// }

// Loop 1: n = 5 → bit = 1 → print → n = 2
// Loop 2: n = 2 → bit = 0 → print → n = 1
// Loop 3: n = 1 → bit = 1 → print → n = 0 (अब loop बंद हो जाएगा)


// Method-1
int decimalToBinaryMethod1(int n){
    // devision Method
    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        binaryno = bit*pow(10 , i++) + binaryno;
        n = n / 2;
    }
   return binaryno;
}

int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinaryMethod1(n);
    cout << binary << endl;
}




// // Method-2 --> BitWise method
// int decimalToBinaryMethod2(int n){
//     // BitWise method
//     int binaryno = 0;
//     int i = 0;
//     while (n > 0){
//         int bit = (n & 1);
//         binaryno = bit*pow(10, i++) + binaryno;
//         n = n >> 1;
//     }
//    return binaryno;
// }

// int main(){
//     int n;
//     cin >> n;
//     int binary = decimalToBinaryMethod2(n);
//     cout << binary << endl;
// }




// // Method-3 --> binaryToDecimal
// int binaryToDecimal(int n){
//     int decimal = 0;
//     int i = 0;
//     while (n)
//     {
//         int bit = n % 10;
//         decimal = decimal + bit * pow(2, i++);
//         n /= 10;
//     }
//     return decimal;
// }

// int main(){
//     int binaryno;
//     cin >> binaryno;
//     cout << binaryToDecimal(binaryno) << endl;
// }








// Binary to Decimal Conversion (Input: 1010)

// You're using this logic in your code:

// int bit = n % 10;
// decimal = decimal + bit * pow(2, i++);
// n = n / 10;

// Now let's walk through it manually for n = 1010:


// ---

// 🧠 Initial Values:

// n = 1010
// decimal = 0
// i = 0


// ---

// ✅ First Iteration:

// bit = 1010 % 10 = 0
// decimal = 0 + 0 * 2^0 = 0
// n = 1010 / 10 = 101
// i = 1


// ---

// ✅ Second Iteration:

// bit = 101 % 10 = 1
// decimal = 0 + 1 * 2^1 = 0 + 2 = 2
// n = 101 / 10 = 10
// i = 2


// ---

// ✅ Third Iteration:

// bit = 10 % 10 = 0
// decimal = 2 + 0 * 2^2 = 2
// n = 10 / 10 = 1
// i = 3


// ---

// ✅ Fourth Iteration:

// bit = 1 % 10 = 1
// decimal = 2 + 1 * 2^3 = 2 + 8 = 10
// n = 1 / 10 = 0 → loop ends


// ---

// 🧾 Final Result:

// Decimal = 10 ✅


// ---
