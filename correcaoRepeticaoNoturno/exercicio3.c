#include<stdio.h>

main(){
    int n, contador = 1;

    printf("Digite um numero");
    scanf("%d", &n);

 /*    while(contador <= n){
        printf("\n%d", contador);
        contador += 2;
    } */
    int impar = 1;
    while(contador <= n){
        printf("\n%d %d", contador,impar);
        impar +=2;
        contador++;
    }
}