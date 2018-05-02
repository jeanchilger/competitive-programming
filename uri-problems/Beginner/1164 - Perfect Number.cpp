#include <iostream>

using namespace std;

int main(){

  int n, x;
  int sum;

  cin >> n;
  for (int i = 0; i < n; i++) {

    cin >> x;
    sum = 0;

    for (int j = 1; j < x; j++){
        if (x % j == 0) {
            sum += j;
        }
    }

    if (sum == x) {
        cout << x << " eh perfeito\n";
    } else {
        cout << x << " nao eh perfeito\n";
    }

  }

  return 0;

}
