#include <stdio.h>

#define MAX 1000  /* maximo de caracteres en una linea */

int main(void){
    int c, i = 0;
    char linea[MAX];

    while((c = getchar()) != EOF){
        if (c == '\n'){
            while(i > 0 && (linea[i-1] == ' ' || linea[i-1] == '\t'))
                --i;

            if (i > 0){
                linea[i++] = '\n';
                linea[i] = '\0';
                printf("%s", linea);
            }
            i = 0; 
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
