#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* "                      );
    printf("\n* Programa JPA-29: Números pares de 0 a 50* "                                    );
    printf("\n******************************************************************************\n");

    int i;

    printf("Números pares entre 0 e 50:\n");

    for (i = 0; i <= 50; i+= 2) {
        printf("%d \n", i);
    }
    
    

    return 0;
}
