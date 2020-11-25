// https://cses.fi/problemset/task/1661
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n, k;
  cin >> n >> k;
  i64 *A = new i64[n];
  for (i64 i = 0; i < n; ++i) {
    cin >> A[i];
  }
  i64 l = INT64_MIN;
  for (i64 i = 0; i < n; ++i) {
    l = max(l, A[i]);
  }
  i64 h = 0;
  for (i64 i = 0; i < n; ++i) {
    h += A[i];
  }

  while (l <= h) {
    i64 m = (l + h) >> 1;

    i64 sum = 0;
    i64 num = 1;
    for (i64 i = 0; i < n; ++i) {
      sum += A[i];
      if (sum > m) {
        sum = A[i];
        ++num;
      }
    }
    if (num <= k) {
      h = m - 1;
    } else {
      l = m + 1;
    }
  }

  cout << l << '\n';


  return 0;
}
