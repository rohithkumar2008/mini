#include <stdio.h>
#include <stdlib.h>

                                                                       // Function declarations
void lengthConverter();
void weightConverter();
void temperatureConverter();
void timeConverter();

int main() {
    int choice;
    do {
        printf("\n==============================\n");
        printf("   UNIT CONVERTER SUITE\n");
        printf("==============================\n");
        printf("1. Length Converter\n");
        printf("2. Weight Converter\n");
        printf("3. Temperature Converter\n");
        printf("4. Time Converter\n");
        printf("5. Exit\n");
        printf("------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                lengthConverter();
                break;
            case 2:
                weightConverter();
                break;
            case 3:
                temperatureConverter();
                break;
            case 4:
                timeConverter();
                break;
            case 5:
                printf("Exiting... Thank you for using Unit Converter Suite!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}

                                                               // Function to convert length
void lengthConverter() {
    int option;
    float km, m, cm;

    printf("\n--- Length Converter ---\n");
    printf("1. Kilometer to Meter\n");
    printf("2. Meter to Centimeter\n");
    printf("3. Centimeter to Meter\n");
    printf("4. Meter to Kilometer\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("Enter value in Kilometer: ");
            scanf("%f", &km);
            m = km * 1000;
            printf("%.2f Kilometer = %.2f Meter\n", km, m);
            break;
        case 2:
            printf("Enter value in Meter: ");
            scanf("%f", &m);
            cm = m * 100;
            printf("%.2f Meter = %.2f Centimeter\n", m, cm);
            break;
        case 3:
            printf("Enter value in Centimeter: ");
            scanf("%f", &cm);
            m = cm / 100;
            printf("%.2f Centimeter = %.2f Meter\n", cm, m);
            break;
        case 4:
            printf("Enter value in Meter: ");
            scanf("%f", &m);
            km = m / 1000;
            printf("%.2f Meter = %.2f Kilometer\n", m, km);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

                                                                     // Function to convert weight
void weightConverter() {
    int option;
    float kg, g, mg;

    printf("\n--- Weight Converter ---\n");
    printf("1. Kilogram to Gram\n");
    printf("2. Gram to Milligram\n");
    printf("3. Gram to Kilogram\n");
    printf("4. Milligram to Gram\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("Enter value in Kilogram: ");
            scanf("%f", &kg);
            g = kg * 1000;
            printf("%.2f Kilogram = %.2f Gram\n", kg, g);
            break;
        case 2:
            printf("Enter value in Gram: ");
            scanf("%f", &g);
            mg = g * 1000;
            printf("%.2f Gram = %.2f Milligram\n", g, mg);
            break;
        case 3:
            printf("Enter value in Gram: ");
            scanf("%f", &g);
            kg = g / 1000;
            printf("%.2f Gram = %.2f Kilogram\n", g, kg);
            break;
        case 4:
            printf("Enter value in Milligram: ");
            scanf("%f", &mg);
            g = mg / 1000;
            printf("%.2f Milligram = %.2f Gram\n", mg, g);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

                                                               // Function to convert temperature
void temperatureConverter() {
    int option;
    float c, f, k;

    printf("\n--- Temperature Converter ---\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &c);
            f = (c * 9/5) + 32;
            printf("%.2f°C = %.2f°F\n", c, f);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &f);
            c = (f - 32) * 5/9;
            printf("%.2f°F = %.2f°C\n", f, c);
            break;
        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &c);
            k = c + 273.15;
            printf("%.2f°C = %.2f K\n", c, k);
            break;
        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &k);
            c = k - 273.15;
            printf("%.2f K = %.2f°C\n", k, c);
            break;
        default:
            printf("Invalid choice!\n");
    }
}

                                                                        // Function to convert time
void timeConverter() {
    int option;
    float hr, min, sec;

    printf("\n--- Time Converter ---\n");
    printf("1. Hour to Minutes\n");
    printf("2. Minutes to Seconds\n");
    printf("3. Seconds to Minutes\n");
    printf("4. Minutes to Hour\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch(option) {
        case 1:
            printf("Enter time in Hours: ");
            scanf("%f", &hr);
            min = hr * 60;
            printf("%.2f Hour = %.2f Minutes\n", hr, min);
            break;
        case 2:
            printf("Enter time in Minutes: ");
            scanf("%f", &min);
            sec = min * 60;
            printf("%.2f Minutes = %.2f Seconds\n", min, sec);
            break;
        case 3:
            printf("Enter time in Seconds: ");
            scanf("%f", &sec);
            min = sec / 60;
            printf("%.2f Seconds = %.2f Minutes\n", sec, min);
            break;
        case 4:
            printf("Enter time in Minutes: ");
            scanf("%f", &min);
            hr = min / 60;
            printf("%.2f Minutes = %.2f Hours\n", min, hr);
            break;
        default:
            printf("Invalid choice!\n");
    }
}
