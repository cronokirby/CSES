// https://cses.fi/problemset/task/1073
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;

  multiset<i64> nums;
  for (i64 i = 0; i < n; ++i) {
    i64 x;
    cin >> x;

    auto it = nums.upper_bound(x);
    if (it != nums.end()) {
      nums.erase(it);
    }
    nums.insert(x);
  }
  cout << nums.size() << '\n';
  return 0;
}