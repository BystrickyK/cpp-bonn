#include <iostream>
using std::cout;
using std::endl;

int main(){
  int size = 2;
  int* ptr = nullptr;

  int arr1[size];
  arr1[0] = 30;
  arr1[1] = 22;
  ptr = arr1;

  cout << *ptr << endl;
  cout << *(++ptr) << endl;

  { // new scope
    int arr[size];
    arr[0] = 3;
    arr[1] = 2;
    ptr = arr;
  } // end of scope
  // ptr now points to arr[0], which has been de-allocated
  cout << *ptr << endl;
  cout << *(++ptr) << endl;

  return 0;
}
