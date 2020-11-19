// https://cses.fi/problemset/task/1645
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  i64 *A = new i64[n];
  for (i64 i = 0; i < n; ++i) {
    cin >> A[i];
  }

  i64 *C = new i64[n];
  for (i64 i = 0; i < n; ++i) {
    i64 closest = 0;
    i64 start = i - 1;
    if (i > 0 && A[i - 1] >= A[i]) {
      start = C[i - 1] - 1;
    }
    for (i64 j = start; j >= 0; --j) {
      if (A[j] < A[i]) {
        closest = j + 1;
        break;
      }
    }
    C[i] = closest;
    cout << closest << ' ';
  }
  cout << '\n';
  return 0;
}