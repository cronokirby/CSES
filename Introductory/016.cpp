// https://cses.fi/problemset/task/1625
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;
typedef int_fast8_t i8;

const i8 GRID_SIZE = 7;
const i8 MAX_C = GRID_SIZE * GRID_SIZE - 1;
inline bool in_bounds(i8 x) { return x >= 0 && x < GRID_SIZE; }

string s;
bool seen[GRID_SIZE][GRID_SIZE];
i64 sum = 0;

inline bool f(i8 x, i8 y) {
  return seen[x][y] || !in_bounds(x) || !in_bounds(y);
}

void dfs(i8 x, i8 y, i8 c = 0) {
  if (x == 0 && y == GRID_SIZE - 1) {
    if (c == MAX_C) {
      ++sum;
    }
    return;
  }

  seen[x][y] = 1;

  if (s[c] == '?' || s[c] == 'L') {
    i8 x2 = x - 1;
    if (!f(x2, y) && !(f(x2 - 1, y) && !f(x2, y - 1) && !f(x2, y + 1))) {
      dfs(x2, y, c + 1);
    }
  }
  if (s[c] == '?' || s[c] == 'R') {
    i8 x2 = x + 1;
    if (!f(x2, y) && !(f(x2 + 1, y) && !f(x2, y - 1) && !f(x2, y + 1))) {
      dfs(x2, y, c + 1);
    }
  }
  if (s[c] == '?' || s[c] == 'U') {
    i8 y2 = y - 1;
    if (!f(x, y2) && !(f(x, y2 - 1) && !f(x - 1, y2) && !f(x + 1, y2))) {
      dfs(x, y2, c + 1);
    }
  }
  if (s[c] == '?' || s[c] == 'D') {
    i8 y2 = y + 1;
    if (!f(x, y2) && !(f(x, y2 + 1) && !f(x - 1, y2) && !f(x + 1, y2))) {
      dfs(x, y2, c + 1);
    }
  }

  seen[x][y] = 0;
}

int main() {
  cin >> s;

  i64 factor = 1;
  dfs(0, 0);
  cout << factor * sum << '\n';
  return 0;
}
