#include <iostream>
#include <vector>

using namespace std;

vector< vector<char> > vecRealloc(vector< vector<char> > vec, int subvecs){

    for (int i = 0; i < subvecs; i++) {
        vec.at(i).push_back(vec.at(i+1).at(0));
        vec.erase(vec.begin() + 1+i);
    }

    return vec;

}

int main() {

    int m, n;

    vector< vector<char> > games = {
        {'A', 'B'},
        {'C', 'D'},
        {'E', 'F'},
        {'G', 'H'},
        {'I', 'J'},
        {'K', 'L'},
        {'M', 'N'},
        {'O', 'P'}
    };



    int add = 4;
    int maxIndex = 8;
    int index = 0;

    for (int i = 0; i < 15; i++) {
        cin >> m >> n;

        if (m > n) {
            games.at(index).erase(games.at(index).begin()+1);

        } else {
            games.at(index).erase(games.at(index).begin());
        }

        index++;

        if (index == maxIndex) {
            games = vecRealloc(games, add);
            index = 0;
            maxIndex -= add;
            add /= 2;
        }

    }

    cout << games.at(0).at(0) << endl;

    return 0;
}
