//https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;

  if (n <= 2) {
    cout << "NO\n";
    return 0;
  }

  i64 sum = 0;
  for (i64 i = 1; i <= n; ++i) {
    sum += i;
  }

  if (sum & 1) {
    cout << "NO\n";
    return 0;
  }

  vector<i64> left, right;

  sum /= 2;
  for (i64 t = n; t > 0; --t) {
    if (sum >= t) {
      sum -= t;
      left.push_back(t);
    } else {
      right.push_back(t);
    }
  }

  cout << "YES\n";
  cout << left.size() << '\n';
  for (auto x : left) {
    cout << x << ' ';
  }
  cout << '\n' << right.size() << '\n';
  for (auto x : right) {
    cout << x << ' ';
  }
  cout << '\n';

  return 0;
}
