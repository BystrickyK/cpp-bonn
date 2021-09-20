#include <iostream>
using std::cout;
using std::endl;

class StrategyClass {
public:
  virtual void Print() const = 0;  // leave undefined
  /*
  classes with no attributes & only undefined virtual classes -> pure virtual classes (interfaces)
  */
};

class StrategyA : public StrategyClass {
public:
  void Print() const override {cout << "Strategy A" << endl; }
};

class StrategyB : public StrategyClass {
public:
  void Print() const override {cout << "Strategy B" << endl; }
};

class MyClass {
public:
  // composition -> using objects of a different class as attributes
  MyClass(const StrategyClass& strat): strategy_{strat} {}
  void Print() const { strategy_.Print(); }  // use the strategies' print function

private:
  const StrategyClass& strategy_;
};

//**************************************** MAIN ********************************
int main(){

  const StrategyA strat_a;
  const StrategyB strat_b;

  MyClass first(strat_a);
  MyClass second(strat_b);

  first.Print();
  second.Print();

  MyClass(StrategyA()).Print();
  MyClass(StrategyB()).Print();

  return 0;
}
