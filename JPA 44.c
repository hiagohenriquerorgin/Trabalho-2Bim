#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-44: Contar dígitos de um número* ");
    printf("\n******************************************************************************* \n");

    int numero, digitos = 0;

    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    if (numero == 0) {
        digitos = 1;
    } else {
        while (numero > 0) {
            digitos++;
            numero /= 10;
        }
    }

    printf("Quantidade de dígitos: %d\n", digitos);

    return 0;
}
