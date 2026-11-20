#include <stdio.h>

/* Este programa copia la entrada a su salida , reemplazando las cadenas de mas de un espacio en blanco o tabulacion por una sola */

int main(void){

    int c;
    int prev = EOF; // Mantiene registro del caracter anterior

    while((c = getchar()) != EOF ){
        if (c != ' ' || prev != ' '){
            putchar(c);
        } 
        prev = c;
    }
   
    return 0;
}


