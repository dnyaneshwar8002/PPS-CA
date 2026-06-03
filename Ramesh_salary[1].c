// Name:Adarsh kadam PRN:2503033111372037
#include <stdio.h>

int main() {
    float basic, da, hra, gross;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic);

    da = 0.4 * basic;
    hra = 0.2 * basic;
    gross = basic + da + hra;

    printf("Gross Salary: %.2f\n", gross);

    return 0;
}
