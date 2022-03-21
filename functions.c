#include <stdio.h>

int agregar(int a[], int *len, int dato){
    a[(*len)++] = dato;
    return *len-1;
}

int busquedaSecuencial (int a[], int len, int dato){
    int i=0;
    // while(i<len && a[i]!=dato){
    //     i++;
    // }

    
    for(i=0;i<len && a[i]!=dato;i++);
    return i==len?-1:i;
}

int buscarYAgregar(int a[], int *len, int dato, int *enc){
    int pos;
    pos=busquedaSecuencial(a,*len,dato);
    if(pos<0){
        *enc = 0;
        pos = agregar(a,len,dato);
    } else {
        *enc = 1;
    }

    return pos;
}