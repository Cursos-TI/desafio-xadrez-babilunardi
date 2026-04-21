#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


int main () {


    //torre = reta 5 casas, bispo diagonal 5 casas, rainha 8 casas pra esquerda
    

    int rainha = 0, bispo = 0, cavalo = 1;

    for (int i = 0; i < 5; i++) 
    {
        printf("Torre para direita\n");
    }
    
        printf("**PROXIMA PECA**\n");


    //parte do while - rainha 8 casas pra esquerda

    while (rainha < 8)
    {
        printf("Rainha para esquerda\n");
        rainha++;
    }
        
    printf("**PROXIMA PECA**\n");

    //do-while bispo diagonal 5


    do 
    {

        printf("Bispo para Cima Direita\n");
        bispo++;

    } while (bispo < 5);


    printf("**PROXIMA PECA**\n");

    //cavalo baixo baixo esquerda
    
    while (cavalo > 0)
    {
        for (int i = 0; i < 2; i++) {
            printf("Cavalo para Baixo\n");

        }

        printf("Cavalo para Esquerda\n");
        cavalo--;

    }


    return 0;
}
