#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int binarySearch(vector<int> vec, float val, int start, int end, int mid) {
    if (start == end + 1) {
        return start;
    }

    if (val == vec.at(mid)) {
        return mid;
    } else if (val < vec.at(mid)) {
        return binarySearch(vec, val, start, mid-1, (mid-1 + start) / 2);
    } else {
        return binarySearch(vec, val, mid+1, end, (end + mid+1) / 2);
    }
}

int main() {

    int c, t;
    //cin >> c >> t;
    c = 100000;
    t = 100000;

    vector<int> radius(c);
    int coordinates[t][2];
    int max = -99;


    for (int i = 0; i < c; i++) {
        radius[i] = i*10;
        if (radius[i] > max) {
            max = radius[i];
        }
    }

    for (int i = 0; i < t; i++) {
        //cin >> coordinates[i][0] >> coordinates[i][1];
        coordinates[i][0] = -100000;
        coordinates[i][1] =  100000;
    }

    int points = 0;
    float distance = 0;

    for (int p = 0; p < t; p++) {
        distance = sqrt(pow(coordinates[p][0], 2) + pow(coordinates[p][1], 2));

        if (distance < radius.at(0)) {
            points += 3;
        } else if (distance > radius.at(radius.size()-1)) {
            points += 0;
        } else {
            points += (c - binarySearch(radius, distance, 0, c - 1, c/2));
        }
    }


    cout << points << endl;


    return 0;
}
