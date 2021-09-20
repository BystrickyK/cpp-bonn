// Declare class
class SomeClass {
  public:
    SomeClass(); // constructor
    int var() const;
  private:
    void DoSomething();
    int var_;
};

// Define class methods
SomeClass::SomeClass() {}  //define constructor
int SomeClass::var() const { return var_; }
void SomeClass::DoSomething() {}


// Constructor is not always needed, attributes can be set by
// the default constructor like this:

class Student {
public:
  // Use default constructor by not declaring one
private:
  int earned_points_ = 0;  // Initialization as 0
  float happiness_ = 1.0f;
};
