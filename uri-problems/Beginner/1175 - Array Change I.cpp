#include <iostream>

using namespace std;

int main(){

    int n[20];
    int num, temp;

    for (int i = 0; i < 20; i++) {
        cin >> num;
        n[i] = num;
    }

    for (int j = 0; j < 10; j++) {
        temp = n[j];
        n[j] = n[19-j];
        n[19-j] = temp;
    }

    for (int k = 0; k < 20; k++) {
        cout << "N[" << k << "] = " << n[k] << endl;
    }

    return 0;

}
