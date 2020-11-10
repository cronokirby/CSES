// https://cses.fi/problemset/task/1621
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  set<i64> u;
  i64 x;
  for (auto i = 0; i < n; ++i) {
    cin >> x;
    u.insert(x);
  }
  cout << u.size() << '\n';
  return 0;
}