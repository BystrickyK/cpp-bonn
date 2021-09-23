#include <math.h>
#include <iostream>
#include <vector>
#include <numeric>
using std::cout;
using std::cerr;
using std::endl;
using std::vector;

class Point{
public:
  Point(vector<double> coordinates): coords_{coordinates} {}
  Point(int size){
    coords_.reserve(size);
  }

  bool Load_val(double& destination, int dim) const {
    if (dim > coords_.size()){
      cout << "The point is of dimension " << coords_.size() << "." << endl;
      cout << "There is no " << dim << "dimension." << endl;
      return false;
    }
    else{
    destination = coords_[dim];
    return true;
    }
}
  double& at(int dim){
    return coords_[dim];
  }

  double at(int dim) const{
    return coords_[dim];
  }

  uint dim() const{
    return (uint) coords_.size();
  }

  void Print() const{
    cout << "[";
    for(uint d=0; d<this->dim(); d++){
      cout << coords_[d] << ", ";
    }
    cout << "\b\b \b]" << endl;
    }

  Point operator-(const Point& other) const{
    if (this->dim() != other.dim()){
      cerr << "The points are not of equal dimension." << endl;
    }
    Point difference(this->dim());
    for(uint d=0; d<this->dim(); d++){
      difference.coords_.emplace_back(this->coords_[d] - other.coords_[d]);
    }
    return difference;
  }

  Point operator^(int exp) const{
    Point result(this->dim());
    for(uint d=0; d<this->dim(); d++){
      result.coords_.emplace_back(std::pow(this->at(d), exp));
    }
    return result;
  }

  static double Distance(const Point& point1, const Point& point2){
    if (point1.dim() != point2.dim()){
      cerr << "The points are not of equal dimension." << endl;
    }
    Point differences_squared = (point1 - point2)^2;
    double square_sum=0, distance;
    for(uint d=0; d<point1.dim(); d++){
      square_sum += differences_squared.at(d);
    }
    distance = std::sqrt(square_sum);
    return distance;
  }

private:
  vector<double> coords_;
};

void print(vector<double> const &vec){
  cout << "[";
  for (uint i=0; i<vec.size(); i++){
    cout << vec[i] << ", ";
  }
  cout << "\b\b \b]" << endl;
}

int main(){

  uint size = 10;  // number of dimensions
  vector<double> coords1(size), coords2(size);
  for (uint i=0; i<size; i++){
    coords1[i] = (int) std::rand() % 15;
    coords2[i] = (int) std::rand() % 15;
  }
  print(coords1);
  print(coords2);

  Point p1 {coords1};;
  Point p2 {coords2};;

  cout << "Points created" << endl;
  p1.Print();
  p2.Print();

  Point diffs = p1 - p2;
  diffs.Print();
  double dist = Point::Distance(p1, p2);
  cout << "Distance: " << dist << endl;

  return 0;
}
