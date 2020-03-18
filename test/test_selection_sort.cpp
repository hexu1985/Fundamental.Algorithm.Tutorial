#include <algorithm>    // std::sort
#include <vector>       // std::vector

#include <gtest/gtest.h>
#include "sort_functions.hpp"
#include "array_size.hpp"

using namespace mini_algo;

TEST(SelectionSortTest, SortVector) {
  std::vector<int> myvector = {32,71,12,45,26,80,53,33};      // 32 71 12 45 26 80 53 33

  // using object as comp
  selection_sort (myvector);  		                          //(12 26 32 33 45 53 71 80)

  EXPECT_TRUE(std::is_sorted(myvector.begin(), myvector.end()));
}

TEST(SelectionSortTest, SortArray) {
  int myvector[] = {32,71,12,45,26,80,53,33};               // 32 71 12 45 26 80 53 33

  // using object as comp
  selection_sort (myvector, array_size(myvector));  		//(12 26 32 33 45 53 71 80)

  EXPECT_TRUE(std::is_sorted(myvector, myvector+array_size(myvector)));
}
