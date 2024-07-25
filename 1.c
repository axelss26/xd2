#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int *puntero;
    int num, val;
    printf("Introduce el numero de elementos: ");
    scanf("%d", &num);
    puntero = (int*)malloc(num * sizeof(int));
    if(puntero == NULL)                    
    {
        printf("Error! memoria no reservada.");
        exit(0);
    }
    printf("Introduce los elementos: ");
    for(val = 0; val < num; ++val)
    {
        scanf("%d", puntero + val);
    }
    printf("Los elementos son: ");
    for(val = 0; val < num; ++val)
    {
        printf("%d, ", *(puntero + val));
    }
    free(puntero);
}