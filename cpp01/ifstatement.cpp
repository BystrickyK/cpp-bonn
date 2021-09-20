#include <iostream>

int main(){

  bool condition1 = true;
  bool condition2 = false;

  if (condition1){
    std::cout << "Condition 1 is True" << std::endl;
  }

  if (!condition2){
    std::cout << "Condition 2 is False" << std::endl;
  }

  int switch_cond = 5;
  switch (switch_cond){
    case 1:
      std::cout << "1" << std::endl;
      break;
    case 2:
      std::cout << "2" << std::endl;
      break;
    case 3:
      std::cout << "3" << std::endl;
      break;
    case 4:
      std::cout << "4" << std::endl;
      break;
    default:
      std::cout << "There's no case for the condition integer." << std::endl;
  }

  return 0;
}
