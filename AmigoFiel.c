#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char tipo[30];
    char nome[40];
    int idade;
}Animal;

Animal animais[10];
int numAnimal = 0;

void CadastrarAnimal();
void ListarAnimal();

int main(){
    int opcao;
    
    do{
    printf("-- Bem vindo ao pet shop Amigo Fiel --\n");
    printf("Selecione o que você deseja:\n");
    printf("1. Cadastrar animal\n");
    printf("2. Lista  de animais com mais de 5 anos\n");
    printf("0. Sair\n");
    scanf("%d", &opcao);
    system("clear");
    
    switch(opcao){
        case 1:
        CadastrarAnimal();
        break;
        case 2:
        ListarAnimal();
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

void CadastrarAnimal(){
    
    for(int i = 0; i < 6; i++){
        printf("-- Cadastre seu bichinho --\n");
    printf("Qual é o tipo do seu animal? ");
    scanf("%s", animais[numAnimal].tipo);
    printf("Qual o nome do seu animal? ");
    scanf(" %[^\n]", animais[numAnimal].nome);
    printf("Qual a idade do seu animal? ");
    scanf("%d", &animais[numAnimal].idade);
    numAnimal++;
    }
}

void ListarAnimal(){
    
    printf("-- Animais com mais de 5 anos --\n");
    for(int i = 0; i < numAnimal; i++){
        if(animais[i].idade >= 5){
    printf("Nome : %s\n", animais[i].nome);
    printf("--------------------------\n");
        }
}
}