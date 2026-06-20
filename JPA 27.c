#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* "                      );
    printf("\n* Programa JPA-27: Tabuada de um número* "                                       );
    printf("\n******************************************************************************\n");

    int n1, i;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &n1);

    printf("\n Tabuada do %d \n", n1);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n1, i, n1 * i);
    }

    return 0;
}
