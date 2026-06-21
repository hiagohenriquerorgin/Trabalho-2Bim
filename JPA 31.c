#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* "                      );
    printf("\n* Programa JPA-31: Contagem regressiva* "                                        );
    printf("\n******************************************************************************\n");

    int i;

    printf("Contagem regressiva: \n");

   
    for (i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;
}
