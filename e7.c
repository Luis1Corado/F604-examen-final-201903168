#include <stdio.h>

/* Este programa utiliza la funcion reverse(s) para escribir las entradas a la inversa , funciona para varias lineas */
#define MAX 1000


void reverse(char s[]);

int main(void){

    int c, i= 0;
    char linea[MAX];

    while((c = getchar()) != EOF ){
        if (c == '\n'){
            linea[i] = '\0';
            reverse(linea);
            printf("%s\n", linea);
            i = 0;

        } else if (i < MAX -1){
            linea[i++] = c;
        }
    }

    /* ultima linea, si no termina en '\n' */
    if (i >0) {
        linea[i]='\0';
        reverse(linea);
        printf("%s\n", linea);
    }

    return 0;
}


void reverse(char s[]){

    int i, j,temp; 

    for (j = 0; s[j] != '\0'; j++); /* busca el final y lo guarda en j */

    --j; 

    for(i = 0; i < j; i++, --j){  /* intercambiar los extremos, tanto i como j cambian en cada ciclo */
        temp = s[i];
        s[i] = s[j];
        s[j] = temp; 
    }
}
