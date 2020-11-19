// https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n, x;
  cin >> n >> x;
  i64* A = new i64[n];
  for (i64 i = 0; i < n; ++i) {
    cin >> A[i];
  }
  i64 l = 0;
  i64 sum = A[0];
  i64 ans = 0;
  for (i64 r = 1; r <= n; ++r) {
    while (sum > x && l < r - 1) {
      sum -= A[l];
      ++l;
    }

    if (sum == x) {
      ++ans;
    }
    if (r < n) {
      sum += A[r];
    }
  }
  cout << ans << '\n';
  return 0;
}
