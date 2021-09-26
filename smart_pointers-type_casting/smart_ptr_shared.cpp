#include <memory>
#include <iostream>

/*
Smart pointers behave just as raw pointers, except for memory allocation

Additional methods:
	> ptr.get() // returns a raw pointer that the smart pointer manages
	> ptr.reset(raw_ptr) // stops using currently managed pointer, freeing its memory if needed,
						sets ptr to raw_ptr

Shared pointer std::shared_ptr
Can be copied
Stores a usage counter and a raw pointer
	INcreases usage counter when copied
	Decrements usage counter when destructed
Frees memory when counter reaches 0!
Can be initialized from a unique_str

auto p = std::shared_ptr<Type>(new Type);
auto p = std::make_shared<Type>(); // preferred

Using contructor Type(<Params>)
auto p = std::shared_ptr<Type>(new Type(<params>));
auto p = std::make_shared<Type>(<params>); // preferred

p.use_count() <- returns count

Smart pointers are typically owned by instances
	that way, we don't have to define a custom destructor,
	which means we typically don't have to define the constructors as well
	(Rule of All or Nothing rule)

!! Don't use smart pointers to point to stack variables
	> it would lead to double free, as the underlying variable would be deleted
	twice, once by the usual stack destruction, and then by the smart pointer
*/

class MyClass {
public:
	MyClass(int val): value_{val} {
		std::cout << "Constructor call. Value: " << val << std::endl;
	}

	~MyClass(){
		std::cout << "Destructor call" << std::endl;
	}

	int value_;
};

int main(){

	auto a_ptr = std::make_shared<MyClass>(12);
	std::cout << a_ptr.use_count() << std::endl;

	{
		auto b_ptr = a_ptr;  // copy pointer (shallow copy)
		std::cout << a_ptr.use_count() << std::endl;
		b_ptr->value_ = 8;
	}

	std::cout << "Back to main scope" << std::endl;
	std::cout << a_ptr->value_ << std::endl;
	std::cout << a_ptr.use_count() << std::endl;

	return 0;
}