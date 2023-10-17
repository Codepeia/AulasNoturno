#include<stdio.h>

main(){
    int codFruta, opcao, qtd;
    float totalCompra, totalFruta;
    do{
        printf("Escolha a fruta: 1 - Abacaxi, 2 - maca, 3 - pera");
        scanf("%d", &codFruta);
        printf("Digite a quantidade");
        scanf("%d", &qtd);

        switch(codFruta){
            case 1:
                totalFruta = qtd * 5.00;
                totalCompra += totalFruta;
                break;
            case 2:
                totalFruta = qtd * 1.00;
                totalCompra += totalFruta;
                break;
            case 3:
                totalFruta = qtd * 4.00;
                totalCompra += totalFruta;
                break;
        }
      printf("Deseja adicionar uma nova fruta? 1 - Sim, 0 - Nao") ;
      scanf("%d", &opcao);
    }while(opcao != 0);

    printf("Total da compra: %f", totalCompra);
    
}