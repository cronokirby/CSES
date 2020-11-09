// https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;

  i64 zeros = 0;
  for (i64 f = 5; f <= n; f *= 5) {
    zeros += n / f;
  }

  cout << zeros << '\n';
  return 0;
}