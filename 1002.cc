#include <iostream>
using namespace std;

int main() {

  double raio;
  double pi = 3.14159;
  cin >> raio;

  double area = pi * raio * raio;

  printf("A=%.4lf\n", area);

  return 0;
}
