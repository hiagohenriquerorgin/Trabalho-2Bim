#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-42: Quantidade de números ímpares digitados* ");
    printf("\n******************************************************************************* \n");

    int numero, i = 1, impares = 0;

    while (i <= 10) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);
        if (numero % 2 != 0) {
            impares++;
        }
        i++;
    }

    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
