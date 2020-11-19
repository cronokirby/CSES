// https://cses.fi/problemset/task/1630
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<pair<i64, i64>> tasks;
  for (i64 i = 0; i < n; ++i) {
    i64 a, b;
    cin >> a >> b;
    tasks.push_back({a, b});
  }
  sort(tasks.begin(), tasks.end());

  i64 t = 0;
  i64 ans = 0;
  for (auto task : tasks) {
    t += task.first;
    ans += task.second - t;
  }
  cout << ans << '\n';
  return 0;
}
