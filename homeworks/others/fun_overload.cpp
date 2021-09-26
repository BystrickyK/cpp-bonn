#include <iostream>
#include <array>

using namespace std;

class Bar{
public:

  const int at(const int idx) const{
    cout << "lval: " << value_[idx] << endl;
    return value_[idx];
  }

private:
  array<int, 9> value_;
};

int main(){
  Bar obj;
  int val;

  // return 3rd value
  val = obj.at(3);
  cout << val << endl;

  // obj.at(3) = 5;
  val = obj.at(3);
  cout << val << endl;


  return 0;
}
