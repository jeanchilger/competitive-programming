#include <iostream>

using namespace std;

int main(){

  double A, B, C;
  double pi = 3.14159;

  cin >> A >> B >> C;

  double triangulo = (A * C) / 2;
  double circulo = pi * C * C;
  double trapazio = ((A + B) * C) / 2;
  double quadrado = B * B;
  double retangulo = A * B;

  printf("TRIANGULO: %.3F\n", triangulo);
  printf("CIRCULO: %.3F\n", circulo);
  printf("TRAPEZIO: %.3F\n", trapazio);
  printf("QUADRADO: %.3F\n", quadrado);
  printf("RETANGULO: %.3F\n", retangulo);

  return 0;
}
