#include <iostream>
using namespace std;

int main(){

  int number;
  int hours;
  float perHour;

  cin >> number;
  cin >> hours;
  cin >> perHour;

  double salary = hours * perHour;

  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2f\n", salary);

  return 0;
}
