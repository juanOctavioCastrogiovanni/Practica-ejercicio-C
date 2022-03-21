#include "../functions.h"
#include <stdio.h>
//agrega elemento a un array



int main(){
    int array[50];
    int len=0;
    int dato;

    do{
        printf("\nPor favor teclee un numero: ");
        scanf("%d",&dato);
       if(dato!=0){ 
            agregar(array,&len,dato);
        }
    } while(dato!=0);

        printf("Los numero ingresados fueron\n");

    for(int i=0;i<len;i++){
        if(i==len-1){
        printf("%d",array[i]);
        continue;
        }
        printf("%d,",array[i]);
    }
   
    
    return 0;
}

