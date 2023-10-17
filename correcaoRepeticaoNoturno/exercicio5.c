#include<stdio.h>

main(){
    //soma cinquenta primeiros numeros pares

    int contador, pares = 2, soma = 0;

/*     while(contador <= 50){
        pares += 2;
        soma += pares;
        printf("\n%d %d %d", contador, pares, soma); 
        contador++;
    } */


    for(contador = 1; contador <= 50; contador++){
            soma += pares;
            printf("\n%d %d %d", contador, pares, soma); 
            pares+=2;
    }
    printf("%d", soma);  
}