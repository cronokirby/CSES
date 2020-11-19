// https://cses.fi/problemset/task/1642
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n, target;
  cin >> n >> target;
  i64 *A = new i64[n];
  for (i64 i = 0; i < n; ++i) {
    cin >> A[i];
  }
  vector<pair<i64, pair<i64, i64>>> PS;
  for (i64 i = 0; i < n; ++i) {
    for (i64 j = i + 1; j < n; ++j) {
      PS.push_back({A[i] + A[j], {i + 1, j + 1}});
    }
  }
  sort(PS.begin(), PS.end());

  i64 l = 0;
  i64 r = PS.size() - 1;
  while (l < r) {
    i64 sum = PS[l].first + PS[r].first;
    if (sum == target) {
      i64 vals[4] = {PS[l].second.first, PS[l].second.second, PS[r].second.first, PS[r].second.second};
      for (i64 i = 0; i < 4; ++i) {
        for (i64 j = i + 1; j < 4; ++j) {
          if (vals[i] == vals[j]) {
            cout << "IMPOSSIBLE\n";
            return 0;
          }
        }
      }
      for (i64 i = 0; i < 4; ++i) {
        cout << vals[i] << ' ';
      }
      cout << '\n';
      return 0;
    } else if (sum > target) {
      --r;
    } else {
      ++l;
    }
    next:;
  }

  cout << "IMPOSSIBLE\n";
  return 0;
}