
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


#include <stdio.h>


void torre (int casas) {

    if(casas > 0) {

        torre(-- casas);
        printf("Torre para Direita\n");
    }
} 

void rainha (int casas2) {

    if (casas2 > 0) {

        rainha(-- casas2);
        printf("Rainha para Esquerda\n");
    }
}

void bispo (int casas3) {

     if(casas3 > 0) { 
       
        for (int i = 0; i < 1; i++) {
            printf ("Bispo Cima ");
        
        for(int j = 0; j < 1; j++){
            printf ("Direita\n");
        }
       bispo (--casas3);
        }
    }

}


int main () {

    int quantidade, quantidade2, quantidade3;
    int cavalo;



    //torre
    printf("***Bem vindo ao Xadrez da Babi***\n");
    printf("Digite quantas vezes quer mover sua Torre para direita\n");
    scanf("%d", &quantidade);

       torre(quantidade);


    //rainha
    printf("Digite quantas vezes quer mover sua Rainha para esquerda\n");
    scanf("%d", &quantidade2);

       rainha(quantidade2);


       //bispo
    printf("Digite quantas vezes quer mover seu Bispo\n");
    scanf("%d", &quantidade3);

       bispo(quantidade3);
    
//cavalo baixo baixo esquerda
    
    printf("Digite quantas vezes quer mover seu Cavalo\n");
    scanf("%d", &cavalo);

    while (cavalo > 0)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo Cima, ");
        }
            printf("Direita\n");
            --cavalo;

    }



}
