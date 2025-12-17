#include<stdio.h>

int main() {
    float basicsalary, grossalary, hrapr, dapr, tapr, hra, da, ta;

    printf("Enter Your Salary: ");
    scanf("%f",&basicsalary);

    printf("Enter Your HRA: ");
    scanf("%f",&hrapr);

    printf("Enter Your DA: ");
    scanf("%f",&dapr);

    printf("Enter Your TA: ");
    scanf("%f",&tapr);

    hra = basicsalary * (hrapr / 100.0);
    da = basicsalary * (dapr / 100.0);
    ta = basicsalary * (tapr / 100.0);

    grossalary = basicsalary + hra + da + ta;
    printf("The gross salary is: %f\n", grossalary);
}