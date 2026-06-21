#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-39: Verificar se um número é positivo* ");
    printf("\n******************************************************************************* \n");

    float numero;

    printf("Digite un número positivo: ");
    scanf("%f", &numero);

    while (numero <= 0) {
        printf("Valor inválido! Digite um número positivo: ");
        scanf("%f", &numero);
    }

    printf("Número positivo registrado: %.2f\n", numero);

    return 0;
}
