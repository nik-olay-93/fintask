#include "gtest/gtest.h"
#include "../task.cpp"

TEST(BT, traverse) {
  vector<int> arr = { 1, 2, 3, 4, 5, 6, 7 };
  vector<int> res;
  vector<int> expected = { 1, 2, 3, 4, 3, 6, 7 };
  BTS(arr, res);
  for (int i = 0; i < expected.size(); i++) {
    ASSERT_EQ(res[i], expected[i]);
  }
}