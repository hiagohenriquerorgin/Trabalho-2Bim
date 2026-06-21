#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-53: Confirmar saída com 's'* ");
    printf("\n******************************************************************************* \n");

    char opcao;

    do {
        printf("Deseja sair do sistema? (s/n): ");
        scanf(" %c", &opcao);
    } while (opcao != 's');

    return 0;
}
