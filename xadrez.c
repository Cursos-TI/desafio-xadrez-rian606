
#include <stdio.h>
//desafio novato
int main(){

    int torre = 0, bispo = 0, rainha = 0; //declaração das variaveis

    printf("torre\n");// nome da peça

    for (torre; torre < 5; torre++)// movimento da peça
    {
        printf("Direita\n");//direção do movimento
    }

    printf("\nbispo\n");//nome da peça

    while (bispo < 5)//enqunto for verdadeira
    {
        printf("Cima, Direita\n");//movimento
        bispo++;//adição para não gerar loop infinito
    }

    printf("\nrainha\n");//nome peça
    
    do
    {
        printf("Esquerda\n");//movimento
        rainha++;//adição para não gerar loop infinito

    } while (rainha < 8);//condição
    
    return 0;

}