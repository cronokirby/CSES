// https://cses.fi/problemset/task/1074
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> v;
  for (i64 i = 0; i < n; ++i) {
    i64 x;
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  i64 size = v.size();
  i64 median;
  if (size & 1) {
    median = v[size >> 1];
  } else {
    size = size >> 1;
    median = (v[size - 1] + v[size]) >> 1;
  }

  i64 ans = 0;
  for (i64 x : v) {
    ans += abs(x - median);
  }
  cout << ans << '\n';

  return 0;
}