/* Types can be converted from one to another -> type casting
There are 3 types of type casting
	> static_cast
	> reinterpreter_cast
	> dynamic_cast


static_cast
Syntax:
	static_cast<New_Type>(variable)
Convert type of a variable at *compile time*
Rarely needed to be used explicitly, often happens implicitly (like float -> int)
Pointer to an object of a Derived class can be *upcast* to a pointer of its Base class


reinterpret_cast
Syntax:
	reinterpret_cast<New_Type>(variable)
Reinterpret the bytes of a variable as another type
	Doesn't change the memory, only how the (binary) memory is interpreted
	For example, reinterpreting float as int means taking the bytes of the 
	float variable and treating them as an int variable -> the number will
	be completely different
Mostly used when writing binary data

dynamic_cast
dynamic_cast<Base*>(derived_ptr)
Only used in pointers
Conversion happens at runtime!
Used to upcast a pointer (from a pointer->Derived to a pointer->Base)
If derived_ptr cannot be converted to Base*, returns a nullptr
GOOGLE-STYLE == Avoid dynamic casting
*/

