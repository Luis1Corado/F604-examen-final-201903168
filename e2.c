#include <stdio.h>
#include <string.h>

/* Equivale al programa de python: 
 * print('Ingrese un nombre')
 * name = input()
 * print('Hola ', name)
 * La funcion input lee la linea completa , puede aceptar nombres con espacios
 * */

#define MAX 100
int main() {
    char name[MAX];

    printf("Ingrese un nombre\n");
    /* scanf("%29s", name); scanf no imita completamente la funcionalidad de input() en python, scanf solo lee la primera palabra */   
    
    if (fgets(name, MAX, stdin) == NULL)  /* entrada vacia o erro */
        name[0] = '\0';

    name[strcspn(name, "\n")] = '\0'; /* quitar el '\n' del Enter */

    printf("Hola %s\n", name);

    return 0;
}
