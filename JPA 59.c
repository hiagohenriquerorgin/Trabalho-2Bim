#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-59: O Assistente de Direção* ");
    printf("\n******************************************************************************* \n");

    char direcao;

    printf("Digite a letra de direção (N, S, L, O): ");
    scanf(" %c", &direcao);

    switch(direcao) {
        case 'N':
            printf("Seguir para o Norte.\n");
            break;
        case 'S':
            printf("Seguir para o Sul.\n");
            break;
        case 'L':
            printf("Virar à Leste (Direita).\n");
            break;
        case 'O':
            printf("Virar à Oeste (Esquerda).\n");
            break;
        default:
            printf("Comando inválido! Pare o robô.\n");
    }

    return 0;
}
