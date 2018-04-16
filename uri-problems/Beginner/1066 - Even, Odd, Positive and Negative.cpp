#include <iostream>

using namespace std;

int main() {

    int num;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    for (int i=0; i < 5; i++) {
      cin >> num;
      if (num % 2 == 0) {
        even++;
      } else {
        odd++;
      }

      if (num > 0) {
        positive++;
      } else if (num < 0) {
        negative++;
      }
    }

    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", positive);
    printf("%d valor(es) negativo(s)\n", negative);

    return 0;
}
