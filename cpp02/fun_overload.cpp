#include <iostream>

void print_type(const int var);
void print_type(const float var);
void print_type(const char var);

int main(){

  int var1 = 3;
  int& varref = var1;
  float var2 = 3.12;
  char var3 = 'c';

  print_type(var1);
  print_type(varref);
  print_type(var2);
  print_type(var3);

  return 0;
}


void print_type(const int var){
  std::cout << "Integer" << std::endl;
}

void print_type(const float var){
  std::cout << "Float" << std::endl;
}

void print_type(const char var){
  std::cout << "Char" << std::endl;
}
