/*
NAME:shedrack kiilu
REG NO:ct100/g/23588/24
DATE:6TH NOV 2025
*/

#include <stdio.h>

int main() {
    float hours, rate, grossPay, tax, netPay, overtimeHours;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    if (hours > 40) {
        overtimeHours = hours - 40;
        grossPay = (40 * rate) + (overtimeHours * rate * 1.5);
    } else {
        grossPay = hours * rate;
    }

    // Tax calculation
    if (grossPay <= 600) {
        tax = 0.15 * grossPay;
    } else {
        tax = (0.15 * 600) + (0.20 * (grossPay - 600));
    }

    netPay = grossPay - tax;

    printf("\nGross Pay: %.2f", grossPay);
    printf("\nTax: %.2f", tax);
    printf("\nNet Pay: %.2f\n", netPay);

    return 0;
}