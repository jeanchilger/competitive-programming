#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> vec, int val, int start, int end, int mid) {
    if (val < vec.at(start)) {
        return vec.at(start);
    } else if (val > vec.at(end)) {
        return vec.at(end);
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

    cout << "Number of elements >> elements\n";
    vector<int> vec;
    int vSize, elem, val;
    cin >> vSize;
    for (int i = 0; i < vSize; i++) {
        cin >> elem;
        vec.push_back(elem);
    }

    cout << "Values to find\n";
    while (1) {
        cin >> val;
        cout << binarySearch(vec, val, 0, vec.size()-1, vec.size()/2) << endl << endl;
    }

    return 0;
}
