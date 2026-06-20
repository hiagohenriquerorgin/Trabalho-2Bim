#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* "                      );
    printf("\n* Programa JPA-26: Contar de 1 a 10* "                                           );
    printf("\n******************************************************************************\n");

    int i;

    printf("Contar de 1 a 10\n");

   
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}
