#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-55: Ler números e mostrar o maior* ");
    printf("\n******************************************************************************* \n");

    float numero, maior = -1;

    do {
        printf("Digite uma nota (ou um valor negativo para encerrar): ");
        scanf("%f", &numero);

        if (numero > maior && numero >= 0) {
            maior = numero;
        }
    } while (numero >= 0);

    if (maior != -1) {
        printf("Maior número positivo informado: %.2f\n", maior);
    } else {
        printf("Nenhum número positivo foi digitado.\n");
    }

    return 0;
}
