#include <iostream>

using namespace std;

int main() {

    int c, t;
    cin >> c >> t;

    int radius[c];
    int coordinates[t][2];
    int max = -99;


    for (int i = 0; i < c; i++) {
        cin >> radius[i];
        if (radius[i] > max) {
            max = radius[i];
        }
    }

    for (int i = 0; i < t; i++) {
        cin >> coordinates[i][0] >> coordinates[i][1];
    }

    int points = 0;

    for (int r = 0; r < c; r++) {

        for (int o = 0; o < t; o++) {

            if ((coordinates[o][0] <= radius[r]) && (coordinates[o][0] >= -radius[r])) {

                if ((coordinates[o][1] <= radius[r]) && (coordinates[o][1] >= -radius[r])) {

                    coordinates[o][0] = max+1;
                    points += (c - r);
                }
            }
        }
    }
    cout << points << endl;


    return 0;
}
