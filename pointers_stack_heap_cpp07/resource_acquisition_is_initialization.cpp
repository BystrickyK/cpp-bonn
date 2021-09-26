#include <iostream>
using namespace std;

// RAII

struct SomeOtherClass{};

class GoodClass{ // GoodClass owns its data
public:
	GoodClass() {data_ = new SomeOtherClass; } // constructor allocates data
	~GoodClass(){ // destructor deallocates data
		delete data_;
		data_ = nullptr;
	}

private:
	SomeOtherClass* data_;
};

/*
When an instance of GoodClass goes out of scope, its destructor is called
and its data allocated in heap memory is freed by the destructor
Instances of GoodClass still cannot be copied, due to the threat 
of a dangling pointer

We haven't defined a copy constructor -> it will copy the value of the pointer -> possible problems
GoodClass a;
GoodClass b(a);  // copy constructor is called, b's data_ is shared with a
a.data_ == b.data_ // pointer value are equal, they point to the same memory

When the instances get destructed at the end of the scope, the memory at data_ will first
get deallocated by a's destructor. When b's destructor is called, it will try to free the
same data again, but this will result in an 'Double free or corruption' runtime error.
*/

int main(){

GoodClass a;
GoodClass b(a);

	return 0;
}

/*
Shallow copy -> copy pointers, not data
Deep copy -> Copy data, create new pointers
Default copy constructor does shallow copy

RAII + shallow copy -> dangling pointer
RAII + Rule of All Or Nothing (Either define no costructors/destructors, or all of them) -> correct

Use smart pointers instead!

Smart pointers wrap a raw pointer into a class that manages it (RAII)
Only use them with heap memory 
Keep using raw pointers for non-owning pointers and simple address storing
#include <memory> for smart pointers
2 types:
	> std::unique_ptr
	> std::shared_ptr

*/