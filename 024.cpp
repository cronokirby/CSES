// https://cses.fi/problemset/task/1643
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  i64 *a = new i64[n];
  for (i64 i = 0; i < n; ++i) {
    cin >> a[i];
  }
  i64 m = a[0], s = a[0];
  for (i64 i = 1; i < n; ++i) {
    s = max(a[i], s + a[i]);
    m = max(s, m);
  }
  cout << m << '\n';
  return 0;
}