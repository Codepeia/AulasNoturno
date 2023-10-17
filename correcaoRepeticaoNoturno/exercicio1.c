#include<stdio.h>

main(){
    int n;

    printf("Digite um numero");
    scanf("%d", &n);

    for(int c = 0; c <= n; c++){
        printf("\n %d", c);
    }

}