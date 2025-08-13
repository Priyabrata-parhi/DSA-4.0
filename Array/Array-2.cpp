#include <iostream>
#include<vector>
using namespace std;


void printPairs(vector<int> arr) {
  int n = arr.size();

  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cout <<"( "<< arr[i] <<", " << arr[j] <<"), " ;
    }
    cout << endl;
  }
}

void printAllTriplets(vector<int> arr ) {
  int n = arr.size();

  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      for(int k=j+1; k<n; k++) {
        cout <<"( "<< arr[i] <<", " << arr[j] <<", " << arr[k] <<"), " << endl ;
      }
    }
  }
}

int main() {
  vector<int> arr;

  arr.push_back(10);
  arr.push_back(20);
  arr.push_back(30);
  arr.push_back(40);

  printAllTriplets(arr);
  //arr.push_back(50);

  //fill(arr.begin(), arr.begin()+1 , 5);

  //print
  for(int i=0; i<arr.size(); i++) {
    cout << arr[i] <<", ";
  }
  
  return 0;
}