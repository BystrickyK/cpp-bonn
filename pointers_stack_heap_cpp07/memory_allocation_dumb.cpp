#include <iostream>
#include <math.h>
using namespace std;

int main(){

  // Allocating memory
  int* int_ptr = nullptr;
  int_ptr = new int;
  // For arrays
  float* arr_ptr = nullptr;
  arr_ptr = new float[5];

  // 'new' returns and address of the variable on the heap

  // Deallocating memory
  delete int_ptr;
  delete[] arr_ptr;

  // User control of memory allocation = UNSAFE!
  // Preferable way -> smart pointers that own their memory
  cout << "---------------------" << endl;
  int size = 2;
  int* ptr = nullptr;
  {
    ptr = new int[size];
    ptr[0] = 42;
    ptr[1] = 13;
  }  // End of scope, memory not de-allocated -> possible mem leak

  // Variables still in memory and pointer still points at it
  for (uint i=0; i<size; i++) cout << ptr[i] << endl;

  delete[] ptr; // Deallocate memory
  // If the pointer was reassigned, the memory couldn't be deallocated (lost access to memory) -> mem leak

  for (uint i=0; i<size; i++) cout << ptr[i] << endl;

  return 0;
}
