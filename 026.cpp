// https://cses.fi/problemset/task/1141
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  i64 ans = 0;
  map<i64, i64> starts;
  i64 i = 0;
  for (i64 j = 0; j < n; ++j) {
    i64 x;
    cin >> x;
    if (starts.count(x)) {
      i = max(i, starts[x] + 1);
    }
    ans = max(ans, j - i + 1);
    starts[x] = j;
  }
  cout << ans << '\n';
  return 0;
}
