#include <iostream>

using namespace std;

int main(){

  double raio;
  double pi = 3.14159;

  cin >> raio;

  double volume = (4.0 / 3) * pi * (raio * raio * raio);

  printf("VOLUME = %.3lf\n", (volume));

  return 0;
}
