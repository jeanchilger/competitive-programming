#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, t, count;
    int minor = 999;

    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        if (t < minor){
            minor = t;
            count = i;
        }
    }

    cout << count << endl;


    return 0;
}
