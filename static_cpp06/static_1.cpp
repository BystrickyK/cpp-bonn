#include <iostream>
using std::cout;
using std::endl;

// The class keeps track of the number of its existing instances
class Counted { 
	public:
		Counted() { Counted::count++; }
		~Counted() { Counted::count--; }
		static int count;  // static counter member
};

int Counted::count = 0;

int main(){
	Counted a, b;
	cout << "Count: " << Counted::count << endl;
	Counted c;
	cout << "Count: " << Counted::count << endl;
	return 0;
}
