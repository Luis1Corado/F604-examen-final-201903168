#include <stdio.h>

/* Este programa reemplaza cada tabulacion por una secuencia '>\b-' y cada retroceso por una secuencia '<\b-'*/

int main(void){

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('>');
            putchar('\b');
            putchar('-');
        } else if (c == '\b'){
            putchar('<');
            putchar('\b');
            putchar('-');
        } else {
            putchar(c);
        }
    }


    return 0;
}
