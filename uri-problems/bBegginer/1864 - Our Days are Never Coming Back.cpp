#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string quote = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << quote[i];
    }
    cout << endl;


    return 0;
}
