#include <stdio.h>

int main(void)
{
    int employee_count;
    double salary;
    double salary_total = 0.0;

    printf("Enter the number of employees: ");
    if (scanf("%d", &employee_count) != 1 || employee_count < 0) {
        return 1;
    }

    for (int i = 0; i < employee_count; ++i) {
        printf("Enter salary for employee %d: ", i + 1);
        if (scanf("%lf", &salary) != 1 || salary < 0.0) {
            return 1;
        }
        salary_total += salary;
    }

    printf("Total salary: %.2f\n", salary_total);
    return 0;
}