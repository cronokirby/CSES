#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 m = 1000000007;
  i64 n;
  cin >> n;

  i64 acc = 1;
  while (n-- > 0) {
    acc = (acc << 1) % m;
  }
  cout << acc << '\n';
  return 0;
}