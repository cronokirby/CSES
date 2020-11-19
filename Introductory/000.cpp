// https://cses.fi/problemset/task/1068
#include <iostream>
#include <cstdint>

using namespace std;

typedef int_fast64_t i64;
typedef uint_fast64_t u64;

int main() {
  i64 x;
  cin >> x;
  while (x > 1) {
    cout << x << ' ';
    if (x & 1) {
      x = 3 * x + 1;
    } else {
      x >>= 1;
    }
  }
  cout << x << '\n';
  return 0;
}

