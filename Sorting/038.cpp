// https://cses.fi/problemset/task/1661
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

inline i64 mod(i64 a, i64 n) {
  return abs(a) % n;
}

int main() {
  i64 n;
  cin >> n;
  i64 *A = new i64[n];
  i64 *prev = new i64[n + 1];
  for (i64 i = 0; i < n; ++i) {
    cin >> A[i];
    prev[i] = 0;
  }
  prev[n] = 0;
  prev[0] = 1;

  i64 sum = 0;
  i64 ans = 0;
  for (i64 i = 0; i < n; ++i) {
    sum = (sum + A[i] % n + n) % n;

    ans += prev[sum];

    ++prev[sum];
  }

  cout << ans << '\n';

  return 0;
}

