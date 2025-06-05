#include <stdio.h>

int main(){
    int produtos;
    float preço[10];
    float maior, menor;
    
    printf("-- Bem vindo a loja TechBarato --\n");
    
    for(int i = 0; i < 10; i++){
        printf("Digite o preço do produto: R$");
        scanf("%f", &preço[i]);
    }
    maior = preço[0];
    menor = preço[0];
    for(int i = 1; i < 10; i++){
        if(maior < preço[i]){
            maior = preço[i];
            
        }
        if(menor > preço[i]){
            menor = preço[i];
            
        }
    }
    printf("O produto mais barato custa: R$%.2f \n", menor);
    printf("O produto mais caro custa: R$%.2f \n", maior);
    return 0;
}