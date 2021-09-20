#include "tools.h"

bool ArrayEq(const std::array<int,ARRSIZE>& arr1, const std::array<int,ARRSIZE>& arr2){

  // Check whether the arrays have the same size
  if (arr1.size() != arr2.size()) return false;

  // Check element equality
  for (unsigned int i=0; i<arr1.size(); i++){
    if (arr1[i] != arr2[i]) return false;
  }

  // If the program gets here, the arrays are equal
  return true;
}
