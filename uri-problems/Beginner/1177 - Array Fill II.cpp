#include <iostream>

using namespace std;

int main(){

    int n[1000];
    int t;

    cin >> t;

    for (int i = 0; i < 1000; i += t) {
        for (int j = 0; j < t; j++) {
            if (j+i >= 1000) {
                break;
            }
            
            n[j+i] = j;
        }
    }

    for (int k = 0; k < 1000; k++) {
        cout << "N[" << k << "] = " << n[k] << endl;
    }

    return 0;

}
