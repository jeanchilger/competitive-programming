#include <iostream>

using namespace std;

int main() {

    int X, Y;
    int odd = 0;

    cin >> X;
    cin >> Y;

    int start = X + ((X + 1) % 2);
    int end = Y + ((Y + 1) % 2);

    if (start > end) {
      int temp1 = start;
      int temp2 = X;
      start = end;
      end = temp1;
      X = Y;
      Y = temp2;
    }
    
    for (int i=start; i < end; i += 2) {
      if ((i > X) && (i < Y)) {
        odd += i;
      }
    }

    printf("%d\n", odd);

    return 0;
}
