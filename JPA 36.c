#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-36: Contar até 10 com while* ");
    printf("\n******************************************************************************* \n");

    int i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
