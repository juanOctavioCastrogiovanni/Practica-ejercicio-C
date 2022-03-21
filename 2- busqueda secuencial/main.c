#include <stdio.h>
#include "../functions.h"

//Busqueda secuencial de un elemento



int main(){
    int a[] = {1,5,2,7,4};
    int len = 5;
    int dato;
    int pos;

    printf("\nPor favor seleccione el numero a buscar: ");
    scanf("%d",&dato);

    pos=busquedaSecuencial(a,len,dato);

    if(pos<0){
        printf("\nEl elemento no ha sido encontrado");
    } else {
        printf("\nEl elemento %d se encuentra en la posicion %d\n",dato,pos+1);
    }
    return 0;
}

