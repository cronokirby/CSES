// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n, x;
  cin >> n >> x;
  vector<i64> ws;
  for (i64 i = 0; i < n; ++i) {
    i64 x;
    cin >> x;
    ws.push_back(x);
  }
  sort(ws.begin(), ws.end());

  auto l = 0;
  auto r = (i64)ws.size() - 1;
  i64 count = 0;
  while (l <= r) {
    ++count;
    if (l != r && ws[l] + ws[r] <= x) {
      ++l;
      --r;
    } else {
      --r;
    }
  }
  cout << count << '\n';
  return 0;
}
