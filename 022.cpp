// https://cses.fi/problemset/task/1629
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<pair<i64, i64>> ds;
  while (n-- > 0) {
    i64 a, b;
    cin >> a >> b;
    ds.push_back({a, b});
  }
  sort(ds.begin(), ds.end(),
       [](auto l, auto r) { return l.second < r.second; });
  i64 c = 0;
  i64 end = -1;
  for (auto d : ds) {
    if (d.first >= end) {
      end = d.second;
      ++c;
    }
  }
  cout << c << '\n';
  return 0;
}