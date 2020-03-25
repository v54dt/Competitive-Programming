#include <iostream>

using namespace std;

int main() {
  int ncases;
  cin >> ncases;
  while (ncases--) {
    long long  i, j, k;
    cin >> i >> j >> k;

    cout << (i + j + k) / 2 << endl;
  }
}