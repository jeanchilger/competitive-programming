#include <iostream>

using namespace std;

int main() {

    float initialSalary, taxe;
    taxe = 0;

    cin >> initialSalary;

    float salary = initialSalary;
    salary -= 2000;

    if (initialSalary >= 0 && initialSalary <= 2000) {
        printf("Isento\n");
    } else {
        if (salary < 1000) {
            taxe += salary * 0.08;
        } else {
            taxe += 80;
            salary -= 1000;
            if (salary < 1500) {
                taxe += salary * 0.18;
            } else {
                taxe += 270;
                salary -= 1500;
                taxe += salary * 0.28;
            }
        }
        printf("R$ %.2lf\n", taxe);
    }


    return 0;
}
