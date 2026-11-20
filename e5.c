#include <stdio.h>

/* Este programa borra los espacios en blanco y tabulaciones al final de una linea, tambien borra las lineas que quedan completamente en blanco */
#define MAX 1000  /* maximo de caracteres en una linea */

int main(void){
    int c, i = 0;
    char linea[MAX]; // buffer de linea

    while((c = getchar()) != EOF){
        if (c == '\n'){
            while(i > 0 && (linea[i-1] == ' ' || linea[i-1] == '\t'))
                --i;

            if (i > 0){
                linea[i++] = '\n';
                linea[i] = '\0'; // Marca el nuevo final de la linea
                printf("%s", linea);
            }
            i = 0; // Resetea el contador de la linea 
        } else if (i < MAX -2) {
            linea[i++] = c;
        }


    }

    /* ultima linea , si no termino en '\n' */
    while(i > 0 && (linea[i-1] == ' ' || linea[i-1] == '\t'))
         --i;
    linea[i] = '\0';
    printf("%s", linea);
     
    return 0;
}
