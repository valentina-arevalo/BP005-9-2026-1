#include <stdio.h>

float convertirAFahrenheit(float celsius);

int main() {
    float c;

    printf("Digite Celsius: ");
    scanf("%f",&c);

    printf("Fahrenheit: %.2f", convertirAFahrenheit(c));

    return 0;
}

float convertirAFahrenheit(float celsius){
    return (9.0/5.0*celsius)+32;
}
