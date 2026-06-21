#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-48: Menu com opção de sair* ");
    printf("\n******************************************************************************* \n");

    int opcao;

    do {
        printf("\n1 - Mensagem\n2 - Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Você escolheu a mensagem!\n");
        }
    } while (opcao != 2);

    return 0;
}
