#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    float N1, N2, N3, N4;

    cin >> N1 >> N2 >> N3 >> N4;

    float average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    float exam;

    if (average >= 7) {
        printf("Media: %.1lf\nAluno aprovado.\n", average);

    } else if (average < 5) {
        printf("Media: %.1lf\nAluno reprovado.\n", average);

    } else if (average >= 5 && average <= 6.9) {
        cin >> exam;
        printf("Media: %.1lf\nAluno em exame.\n", average);

        printf("Nota do exame: %.1lf\n", exam);
        float nAverage = (exam + average) / 2;
        if (nAverage >= 5) {
            printf("Aluno aprovado.\nMedia final: %.1lf\n", nAverage);

        } else if (nAverage <= 4.9){
            printf("Aluno reprovado.\nMedia final: %.1lf\n", nAverage);
        }

    }

    return 0;
}
