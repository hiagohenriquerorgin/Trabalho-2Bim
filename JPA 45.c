#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-45: Menu até escolher sair* ");
    printf("\n******************************************************************************* \n");

    int opcao = 0;

    while (opcao != 2) {
        printf("\n1 - Continuar\n2 - Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);
    }

    printf("Programa encerrado.\n");

    return 0;
}
