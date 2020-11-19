#include <iostream>
#include <vector>

using namespace std;

typedef int_fast64_t i64;

int main() {
  int n;
  cin >> n;

  vector<bool> v(n);
  for (int i = 0; i < n - 1; ++i) {
    int x;
    cin >> x;
    v[x - 1] = 1;
  }

  for (int i = 0; i < n; ++i) {
    if (!v[i]) {
      cout << i + 1 << '\n';
      break;
    }
  }

  return 0;
}