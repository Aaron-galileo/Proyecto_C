#include <stdio.h>

#define GTQ_TO_USD 0.129 // Tasa de cambio de quetzales a dólares
#define USD_TO_GTQ 7.75  // Tasa de cambio de dólares a quetzales
#define USD_TO_EUR 0.884 // Tasa de cambio de dólares a euros
#define EUR_TO_USD 1.13  // Tasa de cambio de euros a dólares

int main() {
    float amount, result;

    int choice;
    printf("SBienvenido al conversor de monedas:\n");
    printf("1. Ingrese la cantidad en Quetzales (GTQ)\n");
    printf("2. Ingrese la cantidad en Dólares estadounidenses (USD)\n");
    printf("3. Ingrese la cantidad en Euros (EUR)\n");
    scanf("%d", &choice);

    printf("Ingrese la cantidad: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1: // Conversion de quetzales a dólares y euros
            result = amount * GTQ_TO_USD;
            printf("%.2f GTQ equivale a %.2f USD\n", amount, result);
            printf("%.2f GTQ equivale a %.2f EUR\n", amount, result * USD_TO_EUR);
            break;
        case 2: // Conversion de dólares a quetzales y euros
            result = amount * USD_TO_GTQ;
            printf("%.2f USD equivale a %.2f GTQ\n", amount, result);
            printf("%.2f USD equivale a %.2f EUR\n", amount, amount * USD_TO_EUR);
            break;
        case 3: // Conversion de euros a dólares y quetzales
            result = amount * EUR_TO_USD;
            printf("%.2f EUR equivale a %.2f USD\n", amount, result);
            printf("%.2f EUR equivale a %.2f GTQ\n", amount, result * USD_TO_GTQ);
            break;
        default:
            printf("Opción no válida\n");
            return 1;
    }

    return 0;
}
