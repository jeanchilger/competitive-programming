#include <iostream>

using namespace std;

int main(){

  string name;
  double salary;
  double sales;

  cin >> name;
  cin >> salary;
  cin >> sales;

  double endSalary = salary + (sales * 0.15);

  printf("TOTAL = R$ %.2lf\n", endSalary);

  return 0;
}
