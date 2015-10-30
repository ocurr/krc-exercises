#include <stdio.h>

float fahrToCels(float fahr) {
    return (5.0/9.0) * (fahr-32.0);
}

int main() {

    float celsius;
    int lower, upper, step;

    upper = 300;
    step = 20;

    printf("Fahrenheit, Celsius\n");
    for (float i=0.0; i<upper; i+=step) {
        printf("%3.0f %6.1f\n", i, fahrToCels(i));
    }

    return 0;
}
