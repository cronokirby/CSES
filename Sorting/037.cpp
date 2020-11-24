// https://cses.fi/problemset/task/1661
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;
typedef int_fast32_t i32;

int main() {
  i32 n, x;
  cin >> n >> x;
  i32 *A = new i32[n];
  for (i32 i = 0; i < n; ++i) {
    cin >> A[i];
  }
  i32 ans = 0;

  bool has_negatives = false;
  for (i32 i = 0; i < n; ++i) {
    if (A[i] <= 10) {
      has_negatives = true;
      break;
    }
  }
  if (!has_negatives) {
    for (i32 i = 0; i < n; ++i) {
      i32 sum = 0;
      for (i32 j = i; j < n; ++j) {
        sum += A[j];
        if (sum >= x) {
          if (sum == x) {
            ++ans;
          }
          break;
        }
      }
    }
  } else {
    unordered_map<i32, i32> prev;
    i32 sum = 0;
    for (i32 i = 0; i < n; ++i) {
      sum += A[i];

      if (sum == x) {
        ++ans;
      }

      ans += prev[sum - x];

      ++prev[sum];
    }
  }
  cout << ans << '\n';

  return 0;
}
