// https://cses.fi/problemset/task/1164
#include <bits/stdc++.h>

using namespace std;
typedef int_fast64_t i64;

int main() {
  i64 n;
  cin >> n;
  vector<array<i64, 3>> mp;
  for (i64 i = 0; i < n; ++i) {
    i64 a, b;
    cin >> a >> b;
    mp.push_back({a, 0, i});
    mp.push_back({b, 1, i});
  }
  sort(mp.begin(), mp.end());
  /*
  for (auto p : mp) {
    cout << "p: " << p[0] << ' ' << p[1] << ' ' << p[2] << '\n';
  }
  cout << '\n';
  */
  set<i64> free_rooms;
  for (i64 i = 1; i <= n; ++i) {
    free_rooms.insert(i);
  }
  map<i64, i64> assigned;

  i64 max_room = 0;

  for (auto p : mp) {
    if (!p[1]) {
      i64 room = *free_rooms.begin();
      free_rooms.erase(room);
      max_room = max(max_room, room);
      assigned[p[2]] = room;
    } else {
      i64 room = assigned[p[2]];
      free_rooms.insert(room);
    }
  }

  cout << max_room << '\n';
  for (i64 i = 0; i < n; ++i) {
    cout << assigned[i] << ' ';
  }
  cout << '\n';

  return 0;
}