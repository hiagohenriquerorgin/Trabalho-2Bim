#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-41: Número primo com while* ");
    printf("\n******************************************************************************* \n");

    int numero, i = 1, divisores = 0;

    printf("Digite um número: ");
    scanf("%d", &numero);

    while (i <= numero) {
        if (numero % i == 0) {
            divisores++;
        }
        i++;
    }

    if (divisores == 2) {
        printf("O número %d é primo.\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}
