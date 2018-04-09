#include <iostream>
using namespace std;

int main(){

  double A;
  double B;
  double C;

  cin >> A;
  cin >> B;
  cin >> C;

  double MEDIA = (A*2 + B*3 + C*5) / 10;

  printf("MEDIA = %.1lf\n", MEDIA);

  return 0;
}
