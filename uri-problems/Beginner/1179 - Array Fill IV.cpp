#include <iostream>

using namespace std;

int main(){

    int par[5];
    int impar[5];
    int num;
    int evenIndex = 0;
    int oddIndex = 0;

    for (int i = 0; i < 15; i++) {
        cin >> num;
        if (num % 2){
            impar[oddIndex] = num;
            oddIndex++;

            if (oddIndex == 5) {

                for (int i = 0; i < 5; i++) {
                    cout << "impar[" << i << "] = " << impar[i] << endl;
                }
                oddIndex = 0;
            }

        } else {
            par[evenIndex] = num;
            evenIndex++;

            if (evenIndex == 5) {

                for (int i = 0; i < 5; i++) {
                    cout << "par[" << i << "] = " << par[i] << endl;
                }
                evenIndex = 0;
            }
        }
    }

    for (int i = 0; i < oddIndex; i++) {
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }

    for (int i = 0; i < evenIndex; i++) {
        cout << "par[" << i << "] = " << par[i] << endl;
    }

    return 0;

}
