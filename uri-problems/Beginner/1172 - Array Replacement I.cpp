#include <iostream>

using namespace std;

int main(){

  int x[10];
  int n;


  for (int i = 0; i < 10; i++) {
      cin >> n;
      if (n <= 0) {
          x[i] = 1;
      } else {
          x[i] = n;
      }
  }

  for (int j = 0; j < 10; j++) {
      cout << "X[" << j << "] = " << x[j] << endl;
  }

  return 0;

}
