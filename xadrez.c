
#include <stdio.h>
// nivel novato, aventureiro e mestre
// implementaçao da recursividade para torre, bispo e rainha, e troca de direção do movimento do cavalo
void moverTorre (int casa){
    if (casa > 0)
    {
        printf("Direita\n");
        moverTorre(casa - 1);
    }
}

void moverBispo (int casa){
    if (casa > 0)
    {
        printf("Cima, ");
        if (casa > 0)
        {
            printf("Esaquerda\n");
        }
        
        moverBispo(casa - 1);
    }
    
}

void moverRainha (int casa){
    if (casa > 0)
    {
        printf("Esquerda\n");
        moverRainha(casa - 1);
    }
}

int main(){

    int torre = 0, bispo = 0, rainha = 0, cavalo = 0; //declaração das variaveis

    printf("torre\n");// nome da peça
    moverTorre(5);

    printf("\nBispo\n");
    moverBispo(5);

    printf("\nrainha\n");//nome peça
    moverRainha(8);
    
    printf("\nCavalo\n");//nome peça
    while (cavalo < 3)//enqunto for verdadeira
    {
        while (cavalo < 2)//enqunto for verdadeira
        {
            printf("Cima\n");//movimento
            cavalo++;//adição para não gerar loop infinito
        }
        printf("Direita\n");//movimento final
        cavalo++;//adição para não gerar loop infinito
    }
    


    return 0;

}