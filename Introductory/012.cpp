// https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

i64 chars[26];

int main() {
  string line;
  cin >> line;

  for (char c : line) {
    i64 i = c - 'A';
    if (i >= 0 && i < 26) {
      ++chars[i];
    }
  }

  i64 central = -1;
  for (i64 i = 0; i < 26; ++i) {
    if (chars[i] & 1) {
      if (central < 0) {
        central = i;
      } else {
        cout << "NO SOLUTION\n";
        return 0;
      }
    }
    chars[i] >>= 1;
  }
  for (i64 i = 0; i < 26; ++i) {
    for (i64 j = 0; j < chars[i]; ++j) {
      cout << (char)('A' + i);
    }
  }
  if (central >= 0){
    cout << (char)('A' + central);
  }
  for (i64 i = 25; i >= 0; --i) {
    for (i64 j = 0; j < chars[i]; ++j) {
      cout << (char)('A' + i);
    }
  }
  cout << '\n';

  return 0;
}