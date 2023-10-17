#include<stdio.h>

main(){
    int mult = 0, contador = 1;

/*    while(contador <= 20){
        if(mult % 3 == 0){
            printf("\n%d", mult);
            contador++;
        }
        mult++;
    }  */

    do{
        mult = contador * 3;
        printf("\n%d", mult);
        contador++;
    }while(contador <= 5);


}