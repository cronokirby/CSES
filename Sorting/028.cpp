// https://cses.fi/problemset/task/1163
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 x, n;
  cin >> x >> n;
  multiset<i64> lengths;
  set<i64> s;
  lengths.insert(x);
  s.insert(0);
  s.insert(x);
  for (i64 i = 0; i < n; ++i) {
    i64 a;
    cin >> a;
    auto end = s.lower_bound(a);
    auto start = end;
    --start;
    i64 diff = *end - *start;
    lengths.erase(lengths.find(diff));
    lengths.insert(*end - a);
    lengths.insert(a - *start);
    s.insert(a);

    cout << *lengths.rbegin() << ' ';
  }
  cout << '\n';
}
