#include <string>
#include <iostream>

using namespace std;

class Student {
  public:
    Student(string name): name_{name} {}
    const string& name(){ return name_; }
    // correctly below
    // const string& name() const { return name_; }
    // this way, the method can be called when the object is passed by
    // a const reference
  private:
    string name_;
};

void Print(const Student& student){
  cout << "Student: " << student.name() << endl;
}

int main(){

  Student student{"Chris"};  // object initialization
  Print(student);

  return 0;
}
