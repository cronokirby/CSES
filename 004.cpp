#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;

  if (n == 1) {
    cout << n;
  } else if (n <= 3) {
    cout << "NO SOLUTION";
  } else {
    i64 i_start, j_start;

    if (n & 1) {
      i_start = 1;
      j_start = 2;
    } else {
      i_start = 2;
      j_start = 1;
    }

    for (i64 i = i_start; i <= n; i += 2) {
      cout << i << " ";
    }

    for (i64 j = j_start; j <= n; j += 2) {
      cout << j << " ";
    }
  }
  cout << '\n';

  return 0;
}
