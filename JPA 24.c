#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* "                      );
    printf("\n* Programa JPA-24: Pode votar?* "                                                );
    printf("\n******************************************************************************\n");

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

 
    if (idade >= 16) {
        printf("\nVocê tem %d anos, portanto: **PODE VOTAR!**\n", idade);
        
    } else {
        printf("\nVocê tem %d anos, portanto: **NÃO PODE VOTAR!**\n", idade);
    }

    return 0;
}
