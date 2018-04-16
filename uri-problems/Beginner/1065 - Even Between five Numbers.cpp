#include <iostream>

using namespace std;

int main() {

    int num;
    int even = 0;

    for (int i=0; i < 5; i++) {
      cin >> num;
      if (num % 2 == 0) {
        even += 1;
      }
    }

    printf("%d valores pares\n", even);

    return 0;
}
