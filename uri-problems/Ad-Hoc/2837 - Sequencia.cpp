#include <iostream>
#include <vector>
#include <cmath>

vector<int vector<int> > cache; // what is the value for the cache?? (create another cache of bools?)
vector<int> marked;
vector<int> elements;

int s(int i, int tw) {
    if (tw == 0) return 0;

}

using namespace std;

int main () {

    int n, l, h;
    cin >> n >> l >> h;
    cache.assign(h+1, vector<int>(n, -1)); // row = capacity; col = elements; -1 = change this value;


    return 0;
}
