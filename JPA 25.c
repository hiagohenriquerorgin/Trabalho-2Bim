#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");    
    
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* "                      );
    printf("\n* Programa JPA-25: Notas e aprovação* "                                          );
    printf("\n***************************************************************************** \n");

    float media;

    printf("Digite a sua média final: ");
    scanf("%f", &media);

    
    if (media >= 7.0) {
        printf("\nMédia: %.1f - Situação: Aprovado", media);
    } 
    else if (media >= 5.0) {
        printf("\nMédia: %.1f - Situação: Recuperação", media);
    } 
    else {
        printf("\nMédia: %.1f - Situação: Reprovado", media);
    }

    return 0;
}
