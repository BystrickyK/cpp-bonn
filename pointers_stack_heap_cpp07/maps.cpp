#include <map>

/*
Stores items under unique keys (dictionary -> key-value pairs)
Implemented as a red-black tree -> log n search time complexity
Key can be any type with operator less-than (<) defined

Create from data:
	std::map<KeyT, ValueT> m = {
	{key, value}, {key, value}, {key, value}};
	}

Add item to map:
	m.emplace(key, value);
Modify or add item:
	m[key] = value;
Get (const) ref to an item:
	m.at(key);
Check if key present:
	m.count(key) > 0;
Check size:
	m.size();
*/

#include <unordered_map>

/*
Serves the same purpose as map
Implemented as a hash table -> constant time access, unless "overfilling" (two keys have the same hash)
Key has to be hashable
Typically used with int or string as a key
Exactly the same inteferace as map
*/

//Iterating over maps
for (const auto& kv : m) { // for kv ~ (key, value) in m (kv is a struct)
	const auto& key = kv.first;
	const auto& value = kv.second;
}
// Map has keys sorted
// Unordered map has keys in random order