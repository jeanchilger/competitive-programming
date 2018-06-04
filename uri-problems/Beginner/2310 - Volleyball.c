#include <stdio.h>

int main() {

    int n, att[3], suc[3], i;
    int st = 0;
    int bt = 0;
    int at = 0;
    int st1 = 0;
    int bt1 = 0;
    int at1 = 0;
    char name[256];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf(" %s", name);

        scanf(" %d %d %d", &att[0], &att[1], &att[2]);
        scanf(" %d %d %d", &suc[0], &suc[1], &suc[2]);
        st += suc[0];
        bt += suc[1];
        at += suc[2];
        st1 += att[0];
        bt1 += att[1];
        at1 += att[2];
    }

    printf("Pontos de Saque: %.2lf %%.\n", (st*100.0)/st1);
    printf("Pontos de Bloqueio: %.2lf %%.\n", (bt*100.0)/bt1);
    printf("Pontos de Ataque: %.2lf %%.\n", (at*100.0)/at1);

    return 0;
}
