#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;
typedef uint_fast64_t u64;

int main() {
  i64 n, target;
  cin >> n >> target;
  vector<pair<i64, i64>> PS;
  for (i64 i = 0; i < n; ++i) {
    i64 x;
    cin >> x;
    PS.push_back({x, i + 1});
  }
  sort(PS.begin(), PS.end());

  for (i64 i = 0; i < n; ++i) {
    i64 l = i + 1;
    i64 h = n - 1;
    while (l < h) {
      i64 sum = PS[i].first + PS[l].first + PS[h].first;
      if (sum == target) {
        cout << PS[i].second << " " << PS[l].second << " " << PS[h].second << '\n';
        return 0;
      } else if (sum < target) {
        ++l;
      } else {
        --h;
      }
    }
  }
  cout << "IMPOSSIBLE";
  return 0;
}
