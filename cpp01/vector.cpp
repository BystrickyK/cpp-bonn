#include <iostream>
#include <vector>

// Dynamic table -> Variable size, gets bigger if required
/*
Put value to the end of the vector:
  vec.emplace_back(value)  # newer, preferred in c++11
  vec.push_back(value)

Pre-allocate memory:
  vec.reserve(n)  # n -> number of items
*/



int main(){

  std::vector<float> vec;

  for (int i=0; i<30; i++){
    vec.emplace_back(i);
  }

  for (int i=0; i<vec.size(); i++){
    std::cout << "vec[" << i << "] = " << vec[i] << std::endl;
  }

  return 0;
}
