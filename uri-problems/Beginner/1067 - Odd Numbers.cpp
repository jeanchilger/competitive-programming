#include <iostream>

using namespace std;

int main() {

    int num;
    int odd = 0;

    cin >> num;

    for (int i=1; i <= num; i+=2) {
      cout << i << "\n";
    }

    return 0;
}
