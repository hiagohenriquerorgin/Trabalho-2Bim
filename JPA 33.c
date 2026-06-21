#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-33: Múltiplos de 3 entre 1 e 30* ");
    printf("\n******************************************************************************* \n");

    int i;
    for (i = 3; i <= 30; i += 3) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
