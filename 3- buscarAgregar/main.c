#include <stdio.h>
#include "../functions.h"

int main(){
    int array[] = {1,2,3};
    int a[] = {1,2,3};
    int len = 3;
    int dato;
    int enc = 0;
    int pos;

    printf("\nPor favor seleccione el numero a buscar: ");
    scanf("%d",&dato);

    pos=buscarYAgregar(array, &len, dato, &enc);

    if(enc){
        printf("\nEl elemento fue encontrado en la posicion %d.", pos);
    } else {
        printf("\nConjunto de elementos antes de la busqueda: %d.", a);
        printf("\nEl elemento no fue encontrado pero fue agregado al arreglo en la posicion %d.", pos);
        printf("\nConjunto de elementos despues de la busqueda de la busqueda: %d.", a);
    }
    
    return 0;
}