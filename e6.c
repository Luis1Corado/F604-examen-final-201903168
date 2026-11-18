#include <stdio.h>

#define MAX 1000
#define LIMITE 80


int main(void){
    char linea[MAX];
    int c, i = 0;

    while ((c = getchar()) != EOF){
        if ( c == '\n'){
            if (i > LIMITE){
                linea[i++] = '\n';
                linea[i] = '\0';
                printf("%s", linea);
            }
            i = 0; 
        } else if (i < MAX -2) {
            linea[i++] = c ;  
        }
    }
    /* ultima linea, si no termino en '\n' */
    if (i > LIMITE){
        linea[i] = '\0';
        printf("%s\n", linea);
    }



    return 0; 
}
