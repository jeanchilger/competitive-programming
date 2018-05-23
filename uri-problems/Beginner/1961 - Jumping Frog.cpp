#include <iostream>

using namespace std;

int main(){

    int p, n;
    cin >> p >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i) {
            if ((arr[i] + p < arr[i-1]) || (arr[i-1] + p < arr[i])) {
                cout << "GAME OVER\n";
                break;
            } else if (i == n-1) {
                cout << "YOU WIN\n";
            }
        }
    }

    return 0;
}
