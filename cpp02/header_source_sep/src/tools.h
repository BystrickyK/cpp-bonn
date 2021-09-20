
// ensure file is included only once
#pragma once

#include <array>

#define ARRSIZE 6
#define MILLISECOND chrono::milliseconds

// Array equality function
bool ArrayEq(const std::array<int,ARRSIZE>& arr1, const std::array<int,ARRSIZE>& arr2);
