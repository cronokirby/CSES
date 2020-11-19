// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;
typedef uint_fast64_t u64;

i64 k;

int main() {
  i64 n, m;
  cin >> n >> m >> k;
  vector<i64> as;
  for (i64 i = 0; i < n; ++i) {
    i64 x;
    cin >> x;
    as.push_back(x);
  }
  sort(as.begin(), as.end());

  vector<i64> ss;
  for (i64 i = 0; i < m; ++i) {
    i64 x;
    cin >> x;
    ss.push_back(x);
  }
  sort(ss.begin(), ss.end());

  i64 count = 0;
  i64 i = 0;
  for (auto s : ss) {
    i64 l = s - k;
    i64 u = s + k;
    while (i < (i64)as.size() && as[i] < l) {
      ++i;
    }
    if (i >= (i64)as.size()) {
      continue;
    }
    if (as[i] > u) {
      continue;
    }
    ++count;
    ++i;
  }
  cout << count << '\n';

  return 0;
}
