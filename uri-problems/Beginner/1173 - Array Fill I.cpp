#include <iostream>

using namespace std;

int main(){

  int n[10];
  int v;

  cin >> v;
  n[0] = v;

  for (int i = 1; i < 10; i++) {
      n[i] = n[i-1] * 2;
  }

  for (int j = 0; j < 10; j++) {
      cout << "N[" << j << "] = " << n[j] << endl;
  }

  return 0;

}
