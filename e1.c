#include <stdio.h>

int main() {
    int val;

    //tu codigo aqui....

    printf("Ingrese un valor entero\n");

    if (scanf("%d", &val) != 1){
        printf("entrada invalida\n");
        return 1; 
    }
    
    printf("Salida: %d", val);

    return 0;
}   
