#include <memory>
#include <iostream>

/*
Smart pointers behave just as raw pointers, except for memory allocation

Additional methods:
	> ptr.get() // returns a raw pointer that the smart pointer manages
	> ptr.reset(raw_ptr) // stops using currently managed pointer, freeing its memory if needed,
						sets ptr to raw_ptr


Unique pointer std::unique_ptr
Constructor takes ownership of a provided raw pointer
Negligible overhead
Has no copy constructor -> cannot be copied, can be moved
Guarantees that memory is always owned by a *single* unique pointer
	> prevents dangling pointers
Syntax:
	// Default constructor
	auto p = std::unique_ptr<Type>(new Type);
	// Params constructor
	auto p = std::unique_ptr<Type>(new Type(<params>));

From C++14:
	// Forwards <params> to constructor of unique_ptr
		// Safest way to create unique pointers
	auto p = std::make_unique<Type>(<params>);
*/

class ClassA {
public:
	int value = 10;
};

int main(){

	auto a_ptr = std::make_unique<ClassA>();
	std::cout << a_ptr->value << std::endl;

	auto b_ptr = std::move(a_ptr);
	std::cout << b_ptr->value << std::endl;
	// std::cout << a_ptr->value << std::endl;

	// b_ptr's destructor deallocates the memory
	// a_ptr's destructor deallocates only the object itself, it no longer tries to delete its memory
	//		since the ownership has been std::moved to b_ptr

	return 0;
}