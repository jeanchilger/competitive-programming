#include <iostream>

using namespace std;

int main() {
    int a1, b1, a2, b2, a, b;
    char res = 'N';
    int bigSum = 0;
    int smallSum = 0;
    int si1, si2;

    cin >> a1 >> b1 >> a2 >> b2 >> a >> b;

    if (b > a) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a1 > b1) {
        bigSum = a1;
        smallSum += b1;
    } else {
        bigSum = b1;
        smallSum += a1;
    }

    if (a2 > b2) {
        if (a2 < bigSum) {
            bigSum = a2;
        }
        smallSum += b2;
    } else {
        if (b2 < bigSum) {
            bigSum = b2;
        }
        smallSum += a2;
    }

    if (a1 == a2) {
        si1 = a1;
        si2 = b1 + b2;

    } else if (a1 == b2) {
        si1 = a1;
        si2 = b1 + a2;

    } else if (a2 == b1) {
        si1 = a2;
        si2 = a1 + b2;

    } else if (b1 == b2) {
        si1 = b1;
        si2 = a1 + a2;
    }

    if (si2 > si1) {
        int temp = si1;
        si1 = si2;
        si2 = temp;
    }
    
    if ((a1 >= a && b1 >= b) || (a1 >= b && b1 >= a)) {
        res = 'S';
    } else if ((a2 >= a && b2 >= b) || (a2 >= b && b2 >= a)) {
        res = 'S';
    } else {
        if (bigSum > smallSum) {
            if (si1 >= bigSum && si2 >= smallSum) {
                bigSum = si1;
                smallSum = si2;
            }

            if (bigSum >= a) {
                if (smallSum >= b) {
                    res = 'S';
                }
            }
        } else {
            if (si1 >= smallSum && si2 >= bigSum) {
                smallSum = si1;
                bigSum = si2;
            }

            if (bigSum >= b) {
                if (smallSum >= a) {
                    res = 'S';
                }
            }
        }

    }

    cout << res << endl;

    return 0;

}
