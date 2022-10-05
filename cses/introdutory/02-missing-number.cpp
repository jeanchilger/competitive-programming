#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;


ull input_array[200000];

ull sum_in_range(ull low, ull high) {
    ull sum = 0;

    for (; low <= high; low++) sum += low;

    return sum;
}


void solve(ull n) {
    ull arr_sum = 0;
    arr_sum = accumulate(input_array, input_array + n, arr_sum);

    printf("%lld\n", sum_in_range(1, n) - arr_sum);
}

int main() {

    ull n;

    scanf("%lld", &n);

    for (ull i=0; i < n-1; i++) {
        scanf(" %lld", &input_array[i]);
    }

    solve(n);

    return 0;
}
