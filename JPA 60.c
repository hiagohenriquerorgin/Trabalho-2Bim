#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-60: O Validador de Dias Úteis* ");
    printf("\n******************************************************************************* \n");

    int dia;

    printf("Digite o número do dia (1-Domingo a 7-Sábado): ");
    scanf("%d", &dia);

    switch(dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("Dia Útil. Acesso liberado para o trabalho.\n");
            break;
        case 1:
        case 7:
            printf("Fim de Semana. Prédio fechado.\n");
            break;
        default:
            printf("Número de dia inválido.\n");
    }

    return 0;
}
