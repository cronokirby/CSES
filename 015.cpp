// https://cses.fi/problemset/task/1624
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

typedef tuple<i64, i64> Pos;

bool attacks(Pos &a, Pos &b) {
  if (get<0>(a) == get<0>(b) || get<1>(a) == get<1>(b)) {
    return true;
  }
  for (i64 i = 1; i < 8; ++i) {

    if (abs(get<0>(a) - get<0>(b)) == i && abs(get<1>(a) - get<1>(b)) == i) {
      return true;
    }
  }
  return false;
}

i64 sum = 0;
vector<Pos> queens{};
set<Pos> reserved{};

void search(i64 y) {
  if (y >= 8) {
    ++sum;
    return;
  }
  for (i64 x = 0; x < 8; ++x) {
    Pos p{x, y};
    if (reserved.find(p) != reserved.end()) {
      goto next;
    }
    for (Pos& q : queens) {
      if (attacks(q, p)) {
        goto next;
      }
    }
    queens.push_back(p);
    search(y + 1);
    queens.pop_back();
    next:;
  }
}

int main() {
  for (i64 y = 0; y < 8; ++y) {
    for (i64 x = 0; x < 8; ++x) {
      char c;
      cin >> c;
      if (c == '*') {
        reserved.insert(make_tuple(x, y));
      }
    }
  }

  search(0);

  cout << sum << '\n';
  return 0;
}