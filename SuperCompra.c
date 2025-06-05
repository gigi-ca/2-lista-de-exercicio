#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[40];
    int quant;
    float preço;
}Compra;

Compra compras[10];
float total = 0;
int numCompra = 0;

void ArmazenarProdutos();
void CalcularTotal();

int main(){
    int opcao;
    
    do{
    printf("-- Bem vindo ao mercado SuperCompra --\n");
    printf("Selecione o que você deseja:\n");
    printf("1. Armazenar produtos\n");
    printf("2. Calcular total das compras\n");
    printf("0. Sair\n");
    scanf("%d", &opcao);
    system("clear");
    
    switch(opcao){
        case 1:
        ArmazenarProdutos();
        break;
        case 2:
        CalcularTotal();
        break;
        case 0:
        break;
        default:
        printf("Opcao Invalida!\n");
        break;
    }
    printf("Pressione Enter pra continuar...");
    getchar();
    getchar();
    system("clear");
}while(opcao != 0);
    
    return 0;
}

void ArmazenarProdutos(){
    
    for(int i = 0; i < 10; i++){
    printf("-- Armazene o produto --\n");
    printf("Informe o nome: ");
    scanf(" %[^\n]", compras[numCompra].nome);
    printf("Quantas quantidades tem? ");
    scanf("%d", &compras[numCompra].quant);
    printf("Qual o preço do produto? ");
    scanf("%f", &compras[numCompra].preço);
    numCompra++;
    }
}

void CalcularTotal(){
    
    printf("-- Total --\n");
    for(int i = 0; i < 10; i++){
    total = total + (compras[i].preço * compras[i].quant);
    printf("O total é: %.2f", total);
}
}