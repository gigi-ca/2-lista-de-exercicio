#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    float nota1, nota2, nota3, nota4, media;
}Aluno;

Aluno alunos[5];
int num = 1;

void RegistroAluno();

int main(){
    RegistroAluno();
    return 0;
}

void RegistroAluno(){
    for(int i = 0; i < 5; i++){
        printf("Bem vindo a escola Agua Viva\n");
        printf("Informe o nome do aluno %d: ", num);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Coloque a nota: ");
        scanf("%f", &alunos[i].nota1);
        printf("Coloque a nota: %d", num);
        scanf("%f", &alunos[i].nota2);
        printf("Coloque a nota: ");
        scanf("%f", &alunos[i].nota3);
        printf("Coloque a nota: ");
        scanf("%f", &alunos[i].nota4);
        
        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 + alunos[i].nota4) / 4;
        getchar();
        system("clear");
    }
    
    for(int i = 0; i < 5; i++){
        printf("Nome: %s\n", alunos[i].nome);
        printf("Média: %.2f\n", alunos[i].media);
        if(alunos[i].media >= 6){
            printf("O aluno foi aprovado!!\n");
        }
        else{
            printf("O aluno for reprovado!!\n");
        }
    }
}
