#include <array>
#include <iostream>

int main(){

  std::array<float, 3> arr = {1.0f, 2.0f, 3.0f};

  std::cout << "First element: " << arr[0] << std::endl;
  std::cout << "Second element: " << arr[1] << std::endl;
  std::cout << "Third element: " << arr[2] << std::endl;

  std::cout << "First element: " << arr.front() << std::endl;
  std::cout << "Last element: " << arr.back() << std::endl;
  std::cout << "Array size: " << arr.size() << std::endl;

  std::cout << "Clearing array" << std::endl;
  for (int i=0; i<arr.size(); i++){
    arr[i] = 0;
    std::cout << "Clearing element #" << i << std::endl;
  }

  std::cout << "First element: " << arr[1] << std::endl;
  std::cout << "Second element: " << arr[1] << std::endl;
  std::cout << "Third element: " << arr[2] << std::endl;
  std::cout << "Array size: " << arr.size() << std::endl;

  return 0;
}
