#include <stdio.h>

int main() {

  // Pattern 1
  //  12345
  //  1234
  //  123
  //  12
  //  1

  // for (int i = 5; i >= 1; i--) {
  //     for (int j = 1; j <= i; j++) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // // Generic
  // for (int i = rows; i >= 1; i--) {
  //   for (int j = 1; j <= i; j++) {
  //     cout << j;
  //   }
  //   cout << endl;
  // }

  // Pattern 2
  // 12345
  // 2345
  // 345
  // 45
  // 5

  // for(int i = 1; i <= 5; i++) {
  //     for(int j = i; j <= 5; j++) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 3
  // 54321
  // 4321
  // 321
  // 21
  // 1

  // for(int i = 5; i >= 1; i--) {
  //     for(int j = i; j >= 1; j--) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 4
  // 54321
  // 5432
  // 543
  // 54
  // for(int i = 5; i >= 1; i--) {
  //     for(int j = 5; j >= i; j--) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 5
  // 1
  // 12
  // 123
  // 1234
  // 12345

  // for(int i = 1; i <= 5; i++) {
  //     for(int j = 1; j <= i; j++) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 6
  // 5
  // 45
  // 345
  // 2345
  // 12345

  // for(int i = 5; i >= 1; i--) {
  //     for(int j = i; j <= 5; j++) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 7
  // 1
  // 21
  // 321
  // 4321
  // 54321

  // for(int i = 1; i <= 5; i++) {
  //     for(int j = i; j >= 1; j--) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 8
  // 5
  // 54
  // 543
  // 5432
  // 54321

  // for(int i = 5; i >= 1; i--) {
  //     for(int j = 5; j >= i; j--) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 9
  // 1
  // 22
  // 333
  // 4444
  // 55555

  // for(int i = 1; i <= 5; i++) {
  //     for(int j = 1; j <= i; j++) {
  //         cout << i;
  //     }
  //     cout << endl;
  // }

  // Pattern 10
  // 5
  // 44
  // 333
  // 2222
  // 11111

  // for(int i = 5; i >= 1; i--) {
  //     for(int j = i; j >= 1; j--) {
  //         cout << i;
  //     }
  //     cout << endl;
  // }

  // Pattern 11
  // 55555
  // 4444
  // 333
  // 22
  // 1

  // for(int i = 5; i >= 1; i--) {
  //     for(int j = 1; j <= i; j++) {
  //         cout << i;
  //     }
  //     cout << endl;
  // }

  // Pattern 12
  // 11111
  // 2222
  // 333
  // 44
  // 5

  // for(int i = 1; i <= 5; i++) {
  //     for(int j = 1; j <= 6 - i; j++) {
  //         cout << i;
  //     }
  //     cout << endl;
  // }

  // Pattern 13
  // 12345
  // 4321
  // 123
  // 21
  // 1

  // for(int i = 5; i >= 1; i--) {
  //     for(int j = 1; j <= i; j++) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 14
  // 1234567
  // 12345
  // 123
  // 1

  // for(int i = 7; i >= 1; i -= 2) {
  //     for(int j = 1; j <= i; j++) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 15
  // 1
  // 01
  // 101
  // 0101

  // for(int i = 0; i < 4; i++) {
  //     for(int j = i; j >= 0; j--) {
  //         if(j % 2 == 0) cout << "1";
  //         else cout << "0";
  //     }
  //     cout << endl;
  // }

  // Pattern 16
  // 13579
  // 3579
  // 579
  // 79
  // 9

  // for(int i = 1; i <= 5; i++) {
  //     for(int j = i; j <= 9; j += 2) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 17
  // 1
  // 2 4
  // 1 3 5
  // 2 4 6 8
  // 1 3 5 7 9

  // for(int i = 1; i <= 5; i++) {
  //     if(i % 2 == 0) {
  //         for(int j = 2; j <= i + 1; j += 2) {
  //             cout << j << " ";
  //         }
  //     }
  //     else {
  //         for(int j = 1; j <= i; j += 2) {
  //             cout << j << " ";
  //         }
  //     }
  //     cout << endl;
  // }

  // Pattern 18
  // 55555
  // 45555
  // 34555
  // 23455
  // 12345

  // for(int i = 5; i >= 1; i--) {
  //     for(int j = 5; j >= i; j--) {
  //         cout << j;
  //     }
  //     cout << endl;
  // }

  // Pattern 19
  // 1
  // 23
  // 456
  // 78910

  // int num = 1;
  // for(int i = 1; i <= 4; i++) {
  //     for(int j = 1; j <= i; j++) {
  //         cout << num++;
  //     }
  //     cout << endl;
  // }

  // Pattern 20
  // 1
  // 10
  // 101
  // 1010
  // 10101

  // int n = 1;
  // for(int i = 1; i <= 5; i++) {
  //     for(int j = 1; j <= i; j++) {
  //         cout << n % 2;
  //         n++;
  //     }
  //     cout << endl;
  // }


  return 0;
}