#include <iostream>
using std::cout;
using std::endl;

class Rect {
  public:
    Rect(int w, int h) : width_{w}, height_{h} {}
    int width() const { return width_; }
    int height() const { return height_; }

    // void Print() const {  // This method is used if square is called via rect reference
    virtual void Print() const {  // virtual -> can be overriden -> rect reference to square will call the square's method!
      cout << "Rect: " << width() << " " << height() << endl;
    }

  // private:  // private -> derived classes cannot see the elements (use protected for inheritance)
  protected:
    int width_ = 0;
    int height_ = 0;
};

class Square : public Rect {
  public:
    explicit Square(int size) : Rect(size, size) {}

    // void Print() const {
    void Print() const override {
      cout << "Square: " << width() << " " << height() << endl;
    }

};

// void PrintSqr(Square sq){
//   cout << "Rect: " << sq.width() << " " << sq.height() << endl;
// }

int main(){

  /*
  10 gets implicitly converted into Square with constructor
  Square(10) if the explicit keyword is ommitted in the Square constructor
  */
  // PrintSqr(10);

  Square sq{3};
  sq.Print();

  const Rect& sq_rect = sq;
  sq_rect.Print();

  return 0;
}
