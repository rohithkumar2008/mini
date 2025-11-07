#include <stdio.h>

int main() {
    int mainChoice, subChoice;
    float cm, m, c, f, kg, lb;
   

    while (1) {
        printf("\n=== UNIT CONVERTER SUITE ===\n");
        printf("1) Length\n");
        printf("2) Temperature\n");
        printf("3) Weight\n");
        printf("4) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &mainChoice);

        if (mainChoice == 4) {
            printf("Exiting Unit Converter. Goodbye!\n");
            break;
        }

        switch (mainChoice) {
        case 1: // Length
            do {
                printf("\n--- LENGTH ---\n");
                printf("1) Centimetre -> Meter\n");          // Centimetre to Meter
                printf("2) Meter -> Centimetre\n");          // Meter to Centimetre
                printf("3) Back \n");
                printf("Enter your choice: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) {
                    printf("Enter Centimetre: ");
                    scanf("%f", &cm);
                    if (cm < 0)
                        printf("Invalid! Value must be positive.\n");
                    else
                        printf("Meter = %.2f\n", cm / 100.0);
                } else if (subChoice == 2) {
                    printf("Enter Meter: ");
                    scanf("%f", &m);
                    if (m < 0)
                        printf("Invalid! Value must be positive.\n");
                    else
                        printf("Centimetre = %.2f\n", m * 100.0);
                } else if (subChoice != 3) {
                    printf("Invalid choice!\n");
                }
            } while (subChoice != 3);
            break;

        case 2: // Temperature
            do {
                printf("\n--- TEMPERATURE ---\n");
                printf("1) Celsius -> Fahrenheit\n");            // Celsius to Fahrenheit
                printf("2) Fahrenheit -> Celsius\n");            // Fahrenheit to Celsius
                printf("3) Back\n");
                printf("Enter your choice: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) {
                    printf("Enter Celsius: ");
                    scanf("%f", &c);
                    f = (c * 9 / 5) + 32;
                    printf("Fahrenheit = %.2f\n", f);
                } else if (subChoice == 2) {
                    printf("Enter Fahrenheit: ");
                    scanf("%f", &f);
                    c = (f - 32) * 5 / 9;
                    printf("Celsius = %.2f\n", c);
                } else if (subChoice != 3) {
                    printf("Invalid choice!\n");
                }
            } while (subChoice != 3);
            break;

        case 3: // Weight
            do {
                printf("\n--- WEIGHT ---\n");
                printf("1) Kilogram -> lb \n");      // Kilogram to Pound(lb)
                printf("2) lb -> Kilogram \n");      // Pound(lb) to Kilogram
                printf("3) Back\n");
                printf("Enter your choice: ");
                scanf("%d", &subChoice);

                if (subChoice == 1) {
                    printf("Enter Kilogram: ");
                    scanf("%f", &kg);
                    if (kg < 0)
                        printf("Invalid! Value must be positive.\n");
                    else
                        printf("lb = %.2f\n", kg * 2.2046226218);
                } else if (subChoice == 2) {
                    printf("Enter lb: ");
                    scanf("%f", &lb);
                    if (lb < 0)
                        printf("Invalid! Value must be positive.\n");
                    else
                        printf("Kilogram = %.2f\n", lb / 2.2046226218);
                } else if (subChoice != 3) {
                    printf("Invalid choice!\n");
                }
            } while (subChoice != 3);
            break;

        default:
            printf("Invalid main menu choice!\n");
        }
    }

    return 0;
}
