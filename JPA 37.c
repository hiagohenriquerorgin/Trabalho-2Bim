#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-37: Soma de números até digitar zero* ");
    printf("\n******************************************************************************* \n");

    float numero, soma = 0;

    printf("Digite um número (ou 0 para sair): ");
    scanf("%f", &numero);

    while (numero != 0) {
        soma += numero;
        printf("Digite um número (ou 0 para sair): ");
        scanf("%f", &numero);
    }

    printf("Soma total: %.2f\n", soma);

    return 0;
}
