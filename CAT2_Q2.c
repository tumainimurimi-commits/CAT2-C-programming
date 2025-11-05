#include <stdio.h>

int main() {
    float hours, rate, gross_pay, taxes, net_pay;

    // Request user input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    // Calculate gross pay
    if (hours <= 40)
        gross_pay = hours * rate;
    else
        gross_pay = (40 * rate) + ((hours - 40) * rate * 1.5);

    // Calculate taxes
    if (gross_pay <= 600)
        taxes = 0.15 * gross_pay;
    else
        taxes = (0.15 * 600) + (0.20 * (gross_pay - 600));

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Display results
    printf("\n--- PAY SUMMARY ---\n");
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
