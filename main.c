#include <stdio.h>

void convertLength() {
    int choice;
    float value, result;

    printf("\nLength Conversion:\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Inches to Centimeters\n");
    printf("4. Centimeters to Inches\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value to convert: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = value / 1000;
            printf("%.2f meters = %.2f kilometers\n", value, result);
            break;
        case 2:
            result = value * 1000;
            printf("%.2f kilometers = %.2f meters\n", value, result);
            break;
        case 3:
            result = value * 2.54;
            printf("%.2f inches = %.2f centimeters\n", value, result);
            break;
        case 4:
            result = value / 2.54;
            printf("%.2f centimeters = %.2f inches\n", value, result);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void convertWeight ( ) {
    int choice;
    float value, result;

    printf("\nWeight Conversion:\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value to convert: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = value * 2.20462;
            printf("%.2f kilograms = %.2f pounds\n", value, result);
            break;
        case 2:
            result = value / 2.20462;
            printf("%.2f pounds = %.2f kilograms\n", value, result);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

void convertTemperature () {
    int choice;
    float value, result;

    printf("\nTemperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the value to convert: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            result = (value * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", value, result);
            break;
        case 2:
            result = (value - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", value, result);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

int main() {
    int option;

    do {
        printf("\nUnit Converter Menu:\n");
        printf("1. Convert Length\n");
        printf("2. Convert Weight\n");
        printf("3. Convert Temperature\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                convertLength();
                break;
            case 2:
                convertWeight();
                break;
            case 3:
                convertTemperature();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while (option != 4);

    return 0;
}
