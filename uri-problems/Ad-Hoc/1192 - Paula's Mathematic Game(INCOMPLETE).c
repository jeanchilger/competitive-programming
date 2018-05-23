#include <stdio.h>
#include <string.h>

int main() {

    int n;
    char seq[3], sub[3];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", seq);
        strncpy(sub, seq, 2);
        // if (sub[0] == seq[2])
        if (sub[1] >= 'a' && sub[1] <= 'z') {
            // sub[0] + seq[2]

        } else if (sub[1] >= 'A' && sub[1] <= 'Z') {
            // seq[2] - sub[0]
        }
    }

    return 0;
}
