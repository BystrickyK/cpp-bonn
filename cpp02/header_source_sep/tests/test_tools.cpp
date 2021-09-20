#include <gtest/gtest.h>
#include "../src/tools.h"

TEST(TestArrayEq, EqualArraysReturnTrue){
  std::array<int, ARRSIZE> arr1 = {1, 2, 3, 4, 5, 6};
  std::array<int, ARRSIZE> arr2 = {1, 2, 3, 4, 5, 6};

  EXPECT_EQ(true, ArrayEq(arr1, arr2));
}

// TEST(TestArrayEq, DifferentlySizedArraysReturnFalse){
//   std::array<int, ARRSIZE> arr1 = {1, 2, 3, 4, 5, 6};
//   std::array<int, ARRSIZE-1> arr2 = {1, 3, 4, 5, 6};  // this throws compilation error
//
//   EXPECT_EQ(false, ArrayEq(arr1, arr2));
// }
//
TEST(TestArrayEq, DifferentValueArraysReturnFalse){
  std::array<int, ARRSIZE> arr1 = {1, 2, 3, 4, 5, 6};
  std::array<int, ARRSIZE> arr2 = {1, 2, 4, 4, 5, 6};

  EXPECT_EQ(false, ArrayEq(arr1, arr2));
}
