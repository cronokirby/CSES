#include <iostream>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;

  auto arr = new i64[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  i64 turns = 0;

  for (int i = 1; i < n; ++i) {
    i64 diff = arr[i - 1] - arr[i];
    if (diff > 0) {
      turns += diff;
      arr[i] += diff;
    }
  }

  cout << turns << '\n';

  return 0;
}