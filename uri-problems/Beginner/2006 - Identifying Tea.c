#include <stdio.h>

int main() {
    int t, a, b, c, d, e;
    int rightAnswers = 0;
    scanf("%d", &t);

    scanf(" %d", &a);
    if (a == t) rightAnswers++;

    scanf(" %d", &b);
    if (b == t) rightAnswers++;

    scanf(" %d", &c);
    if (c == t) rightAnswers++;

    scanf(" %d", &d);
    if (d == t) rightAnswers++;

    scanf(" %d", &e);
    if (e == t) rightAnswers++;

    printf("%d\n", rightAnswers);

    return 0;
}
