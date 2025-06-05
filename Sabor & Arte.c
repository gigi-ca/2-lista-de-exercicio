#include <stdio.h>

int main(){
    int prato, sobremesa, final;
    float compra;
    
    printf("-- Bem vindo ao restaurante Sabor & Arte --\n");
    printf("Somente prato principal - R$55\n");
    printf("Sobremesa e bebida - R$15\n");
    printf("Quantos pratos principais você irá querer?\n");
    scanf("%d", &prato);
    printf("Você vai querer sobremesa e bebida?\n");
    scanf("%d", &sobremesa);
    
    if(prato > 3 && sobremesa >= 1){
        final = ((prato * 55) + (sobremesa * 15));
        compra = final - ((prato * 55) * 0.10) + ((sobremesa * 15) * 0.05);
        printf("O valor final da sua compra é de %.2f", compra);
    }
    else if(prato > 3 && sobremesa == 0){
        final = ((prato * 55) + (sobremesa * 15));
        compra = final - ((prato * 55) * 0.10);
        printf("O valor final da sua compra é de %.2f", compra);
    }
    else{
        printf("Você não obteve desconto na compra!");
    }
    
    return 0;
}