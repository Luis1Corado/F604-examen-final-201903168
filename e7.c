#include <stdio.h>

#define MAX 1000


void reverse(char s[]);

int main(void){

    int c, i= 0;
    char linea[MAX];

    while((c = getchar()) != EOF ){
        if (c == '\n'){
            linea[i] = '\0';
            reverse(linea);
            printf("%s", linea);
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

    for (j = 0; s[j] != '\0'; j++); /* busaca el final y lo guarda en j */

    --j; 

    for(i = 0; i < j; i++, --j){  /* intercambiar los extremos, tanto i como j cambian en cada cilo */
        temp = s[i];
        s[i] = s[j];
        s[j] = temp; 
    }
}
