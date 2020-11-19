// https://cses.fi/problemset/task/1620
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

vector<i64> speeds;

i64 f(i64 t) {
  i64 sum = 0;
  for (auto s : speeds) {
    sum += min(t / s, (i64)1e9);
  }
  return sum;
}

int main() {
  i64 n, target;
  cin >> n >> target;
  for (i64 i = 0; i < n; ++i) {
    i64 x;
    cin >> x;
    speeds.push_back(x);
  }

  i64 l = 0;
  i64 h = 1e18;
  while (l < h) {
    i64 m = (l + h) / 2;
    if (f(m) < target) {
      l = m + 1;
    } else {
      h = m; 
    }
  }
  cout << l << '\n';

  return 0;
}
