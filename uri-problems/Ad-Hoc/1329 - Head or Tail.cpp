#include <iostream>

using namespace std;

int main() {

    int z, n;


    while (true) {
        int y = 0;
        int x = 0;
        cin >> n;
        for (int i=0; i < n; i++) {
            cin >> z;
            if (z){
                y++;
            } else {
                x++;
            }
        }
        if (n) {
            printf("Mary won %d times and John won %d times\n", x, y);
        } else {
            break;
        }
    }

    return 0;
}
