// https://cses.fi/problemset/task/1754
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

void process(i64 small, i64 big) {
  i64 remaining = small - (big - small);
  if (remaining < 0 || remaining % 3 != 0) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
}

int main() {
  i64 n;
  cin >> n;
  while (n-- > 0) {
    i64 a, b;
    cin >> a;
    cin >> b;
    process(min(a, b), max(a, b));
  }
  return 0;
}