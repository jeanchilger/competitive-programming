#include <iostream>

using namespace std;

int main() {

    int num;
    int odd = 0;

    cin >> num;
    int start = num + ((num+1) % 2);
    int end = start + 12;

    for (int i=start; i < end; i+=2) {
      cout << i << "\n";
    }

    return 0;
}
