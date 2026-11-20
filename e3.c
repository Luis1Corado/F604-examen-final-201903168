#include <stdio.h>

/* Imprime de tabla de conversion de Fahrenheit a Celsius para f = 0, 20, ..., 300 */

int main(void)
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* Limite inferior */
    upper = 300; /* Limite superior */
    step = 20; /* Tamaño de paso */
    fahr = lower;

    printf("   F      C\n");
    printf("---- ------\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
