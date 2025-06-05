#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char marca[30];
    int ano;
    float km;
}Carro;

Carro carros[10];
int numCarros = 0;

void CadastrarCarro();
void ListarCarro();

int main(){
    int opcao;
    
    do{
    printf("-- Bem vindo a oficina AutoCheck --\n");
    printf("Selecione o que você deseja:\n");
    printf("1. Cadastrar veículo\n");
    printf("2. Listar carros com mais de 100.000 km rodados\n");
    printf("0. Sair\n");
    scanf("%d", &opcao);
    system("clear");
    
    switch(opcao){
        case 1:
        CadastrarCarro();
        break;
        case 2:
        ListarCarro();
        break;
        case 0:
        printf("Obrigado!\n");
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

void CadastrarCarro(){
    printf("-- Cadastre um novo veículo --\n");
    printf("Qual a marca do carro? ");
    scanf("%s", carros[numCarros].marca);
    printf("Informe o ano do veículo? ");
    scanf("%d", &carros[numCarros].ano);
    printf("Quantos km o carro já rodou? ");
    scanf("%f", &carros[numCarros].km);
    if(numCarros > 5){
        printf("Você já atingiu o limite de veículos cadastrados!!");
    }
    numCarros++;
}

void ListarCarro(){
    
    printf("-- Veículos com mais de 100.000 km rodados --\n");
    for(int i = 0; i < numCarros; i++){
        if(carros[i].km >=100000){
    printf("Marca : %s\n", carros[i].marca);
    printf("Ano : %d\n", carros[i].ano);
    printf("Quilometros : %.2f\n", carros[i].km);
    printf("--------------------------\n");
        }
}
}