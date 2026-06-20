#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* "                      );
    printf("\n* Programa JPA-30: Fatorial de um número* "                                      );
    printf("\n******************************************************************************\n");

    int numero, i;
    unsigned long long fatorial = 1;

    printf("Digite um número inteiro para calcular o fatorial: ");
    scanf("%d", &numero);

    for (i = numero; i >= 1; i--) {
        fatorial = fatorial * i;
    }

    printf("O fatorial de %d (%d!) é: **%llu**\n", numero, numero, fatorial);

    return 0;
}
