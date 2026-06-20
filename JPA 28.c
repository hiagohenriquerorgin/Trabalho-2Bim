#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265*  "                     );
    printf("\n* Programa JPA-28: Soma dos 100 primeiros números naturais* "                    );
    printf("\n******************************************************************************\n");

    int i;
    int result = 0;

    
    for (i = 1; i <= 100; i++) {
        result = result + i; 
    }
    
    printf("A soma de todos os números de 1 até 100 é: %d\n", result);

    return 0;
}
