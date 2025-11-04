// unit_converter.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT 100

// --- Input Helper ---
int read_double(const char *prompt, double *value, int allow_negative) {
    char line[MAX_INPUT];
    double temp;
    while (1) {
        printf("%s", prompt);
        if (!fgets(line, sizeof(line), stdin)) {
            printf("Input error. Try again.\n");
            continue;
        }
        if (sscanf(line, "%lf", &temp) != 1) {
            printf("Invalid input. Please enter a number.\n");
            continue;
        }
        if (!allow_negative && temp < 0) {
            printf("Invalid: value must be non-negative.\n");
            continue;
        }
        *value = temp;
        return 1;
    }
}

// --- Conversion Functions ---
double cm_to_m(double cm) { return cm / 100.0; }
double m_to_cm(double m) { return m * 100.0; }

double c_to_f(double c) { return (c * 9.0 / 5.0) + 32.0; }
double f_to_c(double f) { return (f - 32.0) * 5.0 / 9.0; }

double kg_to_lb(double kg) { return kg * 2.2046226218; }
double lb_to_kg(double lb) { return lb / 2.2046226218; }

// --- Submenus ---
void length_menu(void) {
    char line[MAX_INPUT];
    int choice;
    double val, result;
    while (1) {
        printf("\n--- Length ---\n");
        printf("1) cm -> m  \n 2) m -> cm \n  3) Back\n");
        printf("Give the Choice to convert the Number\n");
        printf("Choice: ");
        if (!fgets(line, sizeof(line), stdin)) continue;
        if (sscanf(line, "%d", &choice) != 1) continue;

        switch (choice) {
            case 1:
                read_double("Enter cm: ", &val, 0);
                result = cm_to_m(val);
                printf("m = %.2f\n", result);
                break;
            case 2:
                read_double("Enter m: ", &val, 0);
                result = m_to_cm(val);
                printf("cm = %.2f\n", result);
                break;
            case 3:
                return;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

void temperature_menu(void) {
    char line[MAX_INPUT], again;
    int choice;
    double val, result;

    while (1) {
        printf("\n--- Temperature ---\n");
        printf("1) Celsius -> Fahrenheit  \n 2) Fahrenheit -> Celsius  \n  3) Back\n");
        printf("Give the Choice to convert the Number\n");
        printf("Choice: ");
        if (!fgets(line, sizeof(line), stdin)) continue;
        if (sscanf(line, "%d", &choice) != 1) continue;

        switch (choice) {
            case 1:
                read_double("Enter Celsius: ", &val, 1);
                result = c_to_f(val);
                printf("°F = %.2f\n", result);
                break;
            case 2:
                read_double("Enter Fahrenheit: ", &val, 1);
                result = f_to_c(val);
                printf("°C = %.2f\n", result);
                break;
            case 3:
                return;
            default:
                printf("Invalid choice. Try again.\n");
                continue;
        }

        printf("Another conversion in Temperature? (y/n): ");
        if (!fgets(line, sizeof(line), stdin)) continue;
        if (sscanf(line, " %c", &again) == 1 && (again == 'n' || again == 'N'))
            break;
    }
}

void weight_menu(void) {
    char line[MAX_INPUT];
    int choice;
    double val, result;
    while (1) {
        printf("\n--- Weight ---\n");
        printf("1) kg -> lb \n 2) lb -> kg \n  3) Back\n");
        printf("Give the Choice to convert the Number\n");
        printf("Choice: ");
        if (!fgets(line, sizeof(line), stdin)) continue;
        if (sscanf(line, "%d", &choice) != 1) continue;

        switch (choice) {
            case 1:
                read_double("Enter kg: ", &val, 0);
                result = kg_to_lb(val);
                printf("lb = %.2f\n", result);
                break;
            case 2:
                read_double("Enter lb: ", &val, 0);
                result = lb_to_kg(val);
                printf("kg = %.2f\n", result);
                break;
            case 3:
                return;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}

// --- Main Menu ---
int main(void) {
    char line[MAX_INPUT];
    int choice;

    printf("=== UNIT CONVERTER SUITE ===\n");

    while (1) {
        printf("\n1) Length  \n2) Temperature  \n3) Weight  \n4) Exit\n");
        printf("Give the Choice to convert the Number\n");
        printf("Choice: ");
        if (!fgets(line, sizeof(line), stdin)) continue;
        if (sscanf(line, "%d", &choice) != 1) continue;

        switch (choice) {
            case 1: length_menu(); break;
            case 2: temperature_menu(); break;
            case 3: weight_menu(); break;
            case 4:
                printf("Exiting Unit Converter. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
