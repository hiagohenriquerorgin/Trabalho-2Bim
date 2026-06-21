#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-43: Soma dos pares entre 1 e 100* ");
    printf("\n******************************************************************************* \n");

    int i = 2, soma = 0;

    while (i <= 100) {
        soma += i;
        i += 2;
    }

    printf("A soma dos números pares é: %d\n", soma);

    return 0;
}
