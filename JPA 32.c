#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* "                      );
    printf("\n* Programa JPA-32: Quadrado dos números de 1 a 10* "                             );
    printf("\n******************************************************************************* \n");

    int i;
    for (i = 1; i <= 10; i++) {
        printf("O quadrado de %d é %d\n", i, i * i);
    }

    return 0;
}
