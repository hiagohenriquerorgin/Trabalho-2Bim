#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-46: Contar de 1 a 10* ");
    printf("\n******************************************************************************* \n");

    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
