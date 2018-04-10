using namespace std;

int main(){

  int code1, qnt1, code2, qnt2;
  double val1, val2;

  cin >> code1 >> qnt1 >> val1;
  cin >> code2 >> qnt2 >> val2;

  double tot1 = qnt1 * val1;
  double tot2 = qnt2 * val2;

  printf("VALOR A PAGAR: R$ %.2lf\n", (tot1 + tot2));

  return 0;
}
