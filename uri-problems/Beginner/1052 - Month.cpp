#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    int month;

    cin >> month;

    string monthNames[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    cout << monthNames[month-1] << "\n";

    return 0;
}
