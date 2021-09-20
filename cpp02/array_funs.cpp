#include <iostream>
#include <array>

#define ARRSIZE 20000
#define DTYPE unsigned long int


void compute_array_squares(std::array<DTYPE, ARRSIZE>& arr);

int main(){

  std::array<DTYPE, ARRSIZE> arr;
  for (unsigned int i=0; i<arr.size(); i++){
    arr[i] = i;
    std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
  }

  compute_array_squares(arr);

  std::cout << arr.back() << std::endl;

  return 0;
}


void compute_array_squares(std::array<DTYPE, ARRSIZE>& arr){
  std::cout << "Computing squares of the array elements" << std::endl;
    for (unsigned int i=0; i<arr.size(); i++){
      arr[i] *= arr[i];
      std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
    }
}
