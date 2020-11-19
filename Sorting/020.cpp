// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n, m;
  cin >> n >> m;
  multiset<i64> ts;
  for (i64 i = 0; i < n; ++i) {
    i64 x;
    cin >> x;
    ts.insert(x);
  }
  while (m-- > 0) {
    i64 x;
    cin >> x;
    auto it = ts.lower_bound(x);
    i64 val;
    if (it == ts.end() || *it > x)  {
      if (it == ts.begin()) {
        val = -1;
      } else {
        --it;
        val = *it;
      }
    } else {
      val = *it;
    }
    if (val >= 0) {
      ts.erase(ts.find(val));
    }
    cout << val << '\n';
  }

  return 0;
}
