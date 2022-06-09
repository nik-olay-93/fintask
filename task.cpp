#include <iostream>
#include <vector>
using namespace std;

void BTS(const vector<int>& arr, vector<int>& res, int i = 0) {
  if (i >= arr.size()) {
    return;
  }

  res.push_back(arr[i]);
  BTS(arr, res, 2 * i + 1);
  BTS(arr, res, 2 * i + 2);
}

// int main() {
//   vector<int> a = { 1, 2, 3, 4, 5, 6, 7 };
//   vector<int> res;
//   BTS(a, res);
//   cout << a.size() << ' ' << res.size() << endl;
//   for (auto i : res) {
//     cout << i << ' ';
//   }
// }
