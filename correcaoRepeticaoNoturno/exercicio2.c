#include<stdio.h>

main(){
    int n;

    printf("Digite um numero");
    scanf("%d", &n);

   // for(int c = n; c >= 0; c--){
    //    printf("\n %d", c);
    //}

    while(n >= 0){
        printf("\n %d", n);
        n--;

    }

}