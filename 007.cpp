// https://cses.fi/problemset/task/1072
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  for (i64 k = 1; k <= n; ++k) {
    if (k == 1) {
      cout << "0\n";
      continue;
    }
    i64 k2 = k * k;
    i64 ans = k2 * (k2 - 1) / 2;
    ans -= 4 * (k - 2) * (k - 1);
    cout << ans << '\n';
  }
  return 0;
}
