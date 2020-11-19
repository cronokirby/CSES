// https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> nums{};
  for (i64 i = 0; i < n; ++i) {
    i64 x;
    cin >> x;
    nums.push_back(x);
  }

  i64 total = 0;
  for (auto x : nums) {
    total += x;
  }

  i64 min_diff = INT64_MAX;

  for (i64 subs = 0; subs < (1 << n); ++subs) {
    i64 sum = 0;
    for (i64 i = 0; i < n; ++i) {
      if (subs & (1 << i)) {
        sum += nums[i];
      }
    }
    min_diff = min(min_diff, abs(sum - (total - sum)));
  }

  cout << min_diff << "\n";
  return 0;
}
