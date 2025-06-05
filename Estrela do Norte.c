#include <stdio.h>
#include <stdlib.h>

int main(){
    int quarto;
    float ocupado = 0, porcentagem;
    
    for( int i = 0; i < 10; i++){
        printf("Bem vindo ao hotel Estrela do Norte\n");
        printf("O quarto %d esta o cupado? (1- sim 0- não) \n", i + 1);
        scanf("%d", &quarto);
        if(quarto == 1){
            ocupado++;
        }
        getchar();
        system("clear");
    }
    
    porcentagem = (ocupado/10)*100;
    printf("A taxa de quartos ocupados é de %.2f %%", porcentagem);
    
    return 0;
}