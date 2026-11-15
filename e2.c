#include <stdio.h>

int main() {
    char name[30];

    //tu codigo aqui ...

    printf("Ingrese un nombre\n");
    scanf("%29s", name); // 29 = tamano del buffer para el nombre 
    printf("Hola %s", name);


    
    return 0;
}
