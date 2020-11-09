#include <iostream>

using namespace std;

typedef int_fast64_t i64;

int main() {
  string line;
  cin >> line;

  i64 best_count = 0;
  i64 curr_count = 0;
  char curr = 0;

  for (const char& c : line) {
    if (curr != c) {
      curr = c;
      curr_count = 0;
    }
    ++curr_count;
    if (curr_count > best_count) {
      best_count = curr_count;
    }
  }
  cout << best_count;
  
  return 0;
}