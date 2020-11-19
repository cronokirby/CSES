// https://cses.fi/problemset/task/1631
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<i64> times;
  for (i64 i = 0; i < n; ++i) {
    i64 x;
    cin >> x;
    times.push_back(x);
  }
  sort(times.begin(), times.end());
  i64 sum = 0;
  for (i64 i = 0; i < n; ++i) {
    sum += times[i];
  }
  cout << max(sum, times[n - 1] << 1) << '\n';
  return 0;
}