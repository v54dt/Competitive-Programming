#include <iostream>
using namespace std;

bool cal(int n) {
  int cnt = 0;
  while (n > 0) {
    cnt = cnt + (n % 10);
    n = n / 10;
  }

  if (cnt % 4 == 0)
    return true;
  else
    return false;
}

int main() {
  int n;

  while (cin >> n) {
    for (;;) {
      if (cal(n)) {
        cout << n << endl;
        break;
      } else {
        n = n + 1;
      }
    }
  }
  return 0;
}