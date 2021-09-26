/*
int* ptr1 = some_heap_address;
int* ptr2 = some_heap_address;

delete ptr1;
ptr1 = nullptr;

ptr2 still points to the address, but the underlying memory is deallocated
ptr2 is a dangling pointer; this bug is very difficult to find 
*/

#include <iostream>
using namespace std;

int main(){

	int size = 5;
	int* ptr1 = new int[size];
	int* ptr2 = ptr1; // point to the same data
	ptr1[0] = 100;

	cout << "1: " << ptr1 << " 2: " << ptr2 << endl;
	cout << "ptr2[0]: " << ptr2[0] << endl;

	delete[] ptr1; // free memory
	ptr1 = nullptr;

	cout << "1: " << ptr1 << " 2: " << ptr2 << endl;
	cout << "ptr2[0]: " << ptr2[0] << endl;

	return 0;
}
