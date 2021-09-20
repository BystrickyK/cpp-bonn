#include <iostream>

int main(){

  int num = 1;
  const int& num_ref = num;

  std::cout << "Num: " << num << std::endl;
  std::cout << "Ref num: " << num_ref << std::endl;

  std::cout << "Changing num to 20" << std::endl;
  num += 19;
  std::cout << "Num: " << num << std::endl;
  std::cout << "Ref num: " << num_ref << std::endl;


  return 0;
}
