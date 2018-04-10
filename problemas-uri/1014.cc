#include <iostream>

using namespace std;

int main(){

    int x;
    double y;

    cin >> x;
    cin >> y;

    double consumo = x / y;

    printf("%.3lf km/l\n", consumo);

    return 0;
}
