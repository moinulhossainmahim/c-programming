#include<stdio.h>

void main() {
    double gross_salary, basic_salary, hra, da;
    scanf("%lf", &basic_salary);

    if (basic_salary <= 10000) {
        hra = basic_salary * 0.2;
        da = basic_salary * 0.8;
    } else if (basic_salary >= 10001 && basic_salary <= 20000) {
        hra = basic_salary * 0.25;
        da = basic_salary * 0.9;
    } else {
        hra = basic_salary * 0.3;
        da = basic_salary * 0.95;
    }

    gross_salary = (basic_salary + hra + da);
    printf("Gross salary is: %lf", gross_salary);
}
