#include <stdio.h>

/* Este programa  imita la funcionalidad de un programa en python que pida un valor entero y lo imprima */

int main() {
    int val;

    printf("Ingrese un valor entero\n");

    if (scanf("%d", &val) != 1){
        printf("entrada invalida\n");
        return 1; 
    }
    
    printf("Salida: %d\n", val);

    return 0;
}   
