#include <iostream>
#include <string>
using std::cout;
using std::endl;

// std::move() transfers ownership of the variable

void CheckValue(const std::string& str){
  cout << "lvalue" << endl;
}
void CheckValue(std::string&& str){
  cout << "rvalue" << endl;
}

class Printer {
  public:
    void Print(const std::string& str){
      // str is an lvalue
      this.saved_str = str;
      cout << "lvalue: " << str << endl;
    }

    void Print(std::string&& str){
      // str is an rvalue
      this.saved_str = std::move(str);
      cout << "rvalue: " << saved_str << endl;
    }

  private:
    std::string saved_str;
  };

int main(){

  std::string main_str = "Yo";
  Printer printer;

  printer.Print(main_str);
  printer.Print(std::move(main_str));
  printer.Print(main_str);

  return 0;
}
