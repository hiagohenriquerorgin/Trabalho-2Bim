#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-52: Soma até o número ser múltiplo de 10* ");
    printf("\n******************************************************************************* \n");

    int numero, soma = 0;

    do {
        printf("Digite um número: ");
        scanf("%d", &numero);
        soma += numero;
    } while (numero % 10 != 0);

    printf("Soma total: %d\n", soma);

    return 0;
}
