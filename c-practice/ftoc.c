#include <stdio.h>
double fahrenheitToCelsius(double fahrenheit);
double celsiusToFahrenheit(double celsius);

void main() {
    int choice;
    double temperature, convertedTemp;
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &temperature);
        convertedTemp = fahrenheitToCelsius(temperature);
        printf("%.2f Fahrenheit is %.2f Celsius\n", temperature, convertedTemp);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &temperature);
        convertedTemp = celsiusToFahrenheit(temperature);
        printf("%.2f Celsius is %.2f Fahrenheit\n", temperature, convertedTemp);
    }
    else
    {
        printf("Invalid choice. Please select 1 or 2.\n");
    }
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5.0 / 9.0;
}

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9.0 / 5.0) + 32;
}




