#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int l = n;
  int v = 7;

  l -= 10;

  if (n > 10) {
      if (n - (n % 30)) {
          v += 30 - 10;
          l -= (30 - 10);
      } else {
          v += l;
          l = 0;
      }
      if (n - (n % 100)) {
          v += (100 - 30) * 2;
          l -= (100 - 30);
      } else {
          v += l * 2;
          l = 0;
      }
      if (n > 100) {
          v += l*5;
          l = 0;
      }
  }

  cout << v << endl;

}
