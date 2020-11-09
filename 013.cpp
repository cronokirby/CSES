// https://cses.fi/problemset/task/1622
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  vector<string> ans{};
  do {
    ans.push_back(s);
  } while (next_permutation(s.begin(), s.end()));
  cout << ans.size() << "\n";
  for (auto s : ans) {
    cout << s << '\n';
  }
  return 0;
}
