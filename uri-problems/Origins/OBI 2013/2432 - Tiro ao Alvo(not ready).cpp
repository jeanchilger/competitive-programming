#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int binarySearch(vector<int> vec, int val, int start, int end, int mid) {
    if (val < vec.at(start)) {
        return vec.size();
    } else if (val > vec.at(end)) {
        return 0;
    } else if (start == end){
        return vec.at(start);
    } else if (val == vec.at(mid)) {
        return vec.at(mid);
    } else if (val < vec.at(mid)) {
        return binarySearch(vec, val, start, mid-1, (mid-1 + start) / 2);
    } else {
        return binarySearch(vec, val, mid+1, end, (end + mid+1) / 2);
    }
}

int main() {

    int c, t;
    cin >> c >> t;

    vector<int> radius(c);
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
    int distance = 0;

    for (int p = 0; p < t; p++) {
        distance = sqrt(pow(0 - coordinates[p][0], 2) + pow(0 - coordinates[p][1], 2));
        points += binarySearch(radius, distance, 0, c - 1, c/2);
    }


    cout << points << endl;


    return 0;
}
