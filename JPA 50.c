#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-50: Número positivo obrigatório* ");
    printf("\n******************************************************************************* \n");

    float numero;

    do {
        printf("Digite um valor positivo para depósito: ");
        scanf("%f", &numero);
    } while (numero <= 0);

    printf("Depósito de %.2f realizado com sucesso.\n", numero);

    return 0;
}
