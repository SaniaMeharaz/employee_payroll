#include <stdio.h>

int main() {
    char name[50];
    float hoursWorked, hourlyWage, totalPay;

    printf("Enter employee name:\n ");
    fgets(name, sizeof(name), stdin); 

    printf("Enter hours worked: \n");
    scanf("%f", &hoursWorked);

    printf("Enter hourly wage:\n ");
    scanf("%f", &hourlyWage); 

    
    totalPay = hoursWorked * hourlyWage;

    printf("Employee Name: %s", name);
    printf("Total Pay: $%.2f\n", totalPay);

    return 0;
}