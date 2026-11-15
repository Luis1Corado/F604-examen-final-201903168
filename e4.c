#include <stdio.h>

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

int main(void)
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0; /* lower limit of temperature table */
    upper = 100; /* upper limit */
    step = 10; /* step size */
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
