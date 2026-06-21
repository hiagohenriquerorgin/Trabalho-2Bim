#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-56: O Menu do Fast-Food Digital* ");
    printf("\n******************************************************************************* \n");

    int combo;

    printf("Digite o número do combo (1 a 4): ");
    scanf("%d", &combo);

    switch(combo) {
        case 1:
            printf("Combo Hambúrguer + Batata + Refri - R$ 30,00\n");
            break;
        case 2:
            printf("Combo Pizza Brotinho + Refri - R$ 25,00\n");
            break;
        case 3:
            printf("Combo Salada + Suco Natural - R$ 22,00\n");
            break;
        case 4:
            printf("Combo Balde de Frango + Molho - R$ 35,00\n");
            break;
        default:
            printf("Opção inválida! Escolha de 1 a 4.\n");
    }

    return 0;
}
