#include <stdio.h>

/* Imprime tabla de conversion de Celsius a Fahrenheit para C = 0, 10, ..., 100 */

int main(void)
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* Limite inferior de temperatura */
    upper = 100; /* Limite superior */
    step = 10; /* tamano de paso */
    celsius = lower;

    printf("   C      F\n");
    printf("---- ------\n");
 
    while (celsius <= upper) {
        fahr = celsius*(9.0/5.0) + 32.0;
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius =  celsius + step;
    }

    return 0;
}
