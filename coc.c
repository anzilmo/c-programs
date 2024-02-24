#include <stdio.h>

int main() {
    float unitCharges , totalBill;
    printf("Enter the electricity unit : ");
    scanf("%f", &unitCharges);

   
    totalBill = 0;

    if (unitCharges <= 50) {
        totalBill = unitCharges * 0.50;
    }

    if (unitCharges > 50 && unitCharges <= 150) {
        totalBill = 50 * 0.50 + (unitCharges - 50) * 0.75;
    }

    if (unitCharges > 150 && unitCharges <= 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + (unitCharges - 150) * 1.20;
    }

    if (unitCharges > 250) {
        totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (unitCharges - 250) * 1.50;
    }
    totalBill += totalBill * 0.20;
    printf("Total Electricity Bill: Rs. %.2f\n", totalBill);

    return 0;
}
