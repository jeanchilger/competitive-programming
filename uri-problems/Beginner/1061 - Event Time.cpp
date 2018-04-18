#include <iostream>
#include <string>

using namespace std;

int calculateTime(int start, int end, int limit) {
    if (start < end) {
        return end - start;

    } else if (start == end) {
        return limit;

    } else {
        return (limit - start) + end;
    }
}


int main() {

    int day0, day1;
    int hour0, hour1;
    int min0, min1;
    int second0, second1;

    int dayDuration, hourDuration, minDuration, secondDuration;

    string character;
    cin >> character >> day0;
    cin >> hour0 >> character >> min0 >> character >> second0;

    cin >> character >> day1;
    cin >> hour1 >> character >> min1 >> character >> second1;



    dayDuration = calculateTime(day0, day1, 30);
    hourDuration = calculateTime(hour0, hour1, 24);
    minDuration = calculateTime(min0, min1, 60);
    secondDuration = calculateTime(second0, second1, 60);

    //arrumar aqui

    cout << dayDuration << " - " << hourDuration << " - " << minDuration << " - " << secondDuration << "\n";

    return 0;
}
