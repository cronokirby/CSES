// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  multimap<i64, bool> events;
  while (n-- > 0) {
    i64 a, b;
    cin >> a >> b;
    events.insert({a, true});
    events.insert({b, false});
  }
  i64 curr = 0;
  i64 ans = 0;
  for (auto p : events) {
    if (p.second) {
      ++curr;
      ans = max(ans, curr);
    } else {
      --curr;
    }
  }
  cout << ans << '\n';
  return 0;
}