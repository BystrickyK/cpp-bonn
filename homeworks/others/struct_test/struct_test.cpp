#include <iostream>
#include <string>
using namespace std;

struct foo{
  int i;
  float f;
  string str;
};

int main(){

  foo bar = {1, 1.3, "Hello"};

  cout << bar.i << endl;
  cout << bar.f << endl;
  cout << bar.str << endl;

  return 0;
}
