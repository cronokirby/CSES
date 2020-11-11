// https://cses.fi/problemset/task/1640
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n, x;
  cin >> n >> x;
  map<i64, i64> nums;
  map<i64, i64> twice;
  for (i64 i = 0; i < n; ++i) {
    i64 a;
    cin >> a;
    if (nums.count(a)) {
      twice.insert({a, i});
    } else {
      nums.insert({a, i});
    }
  }
  for (auto y : nums) {
    i64 target = x - y.first;
    map<i64, i64> &m = target == y.first ? twice : nums;
    if (m.count(target)) {
      cout << m[target] + 1 << ' ' << y.second + 1 << '\n';
      return 0;
    }
  }
  cout << "IMPOSSIBLE\n";
  return 0;
}