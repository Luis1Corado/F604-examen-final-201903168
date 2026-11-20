#include <stdio.h>

/* Este programa imprime un histograma de las longitudes de las palabras de la entrada, las palabras con mas de 99 caracteres se cuentan todas juntas en la fila 99 */

#define MAX 100   /*Maximo de longitud de palabra*/

void print_histograma(int histo[]);

int main(void){

    int c, i = 0; 
    int histograma[MAX] = {0}; /*inicializar el histograma con 0 */

    while ((c = getchar()) != EOF){
        if ( c == ' ' || c == '\t' || c == '\n'){
            if (i > 0){
                histograma[i] = histograma[i] +1;
            }
            i = 0;
        } else if (i < MAX -1) {
            i++;
        }
    }

    /*contando la ultima palabra si no termina en espacio o linea */
    if (i > 0)
        histograma[i] = histograma[i] +1;
            
            
    print_histograma(histograma); // Funcion para imprimir el histograma horizontal

    return 0;

}

void print_histograma(int histo[]){

    int i, j; 

    printf("Histograma de longitudes\n");

    for (i = 0; i< MAX; i++){
        if (histo[i] != 0){
            printf("%2d | ", i);
            for (j = 0; j< histo[i]; j++){
                putchar('*');
            }
            printf(" %d\n", histo[i]);
        }
    }

}
