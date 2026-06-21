#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-47: Tabuada de um número* ");
    printf("\n******************************************************************************* \n");

    int numero, i = 1;

    printf("Digite um número: ");
    scanf("%d", &numero);

    do {
        printf("%d x %d = %d\n", numero, i, numero * i);
        i++;
    } while (i <= 10);

    return 0;
}
