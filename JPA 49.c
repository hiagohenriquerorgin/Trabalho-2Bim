#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");	
    printf("\n******************************************************************************* ");
    printf("\n* Aluno: Hiago Henrique Teixeira do Amaral - RA  0026265* ");
    printf("\n* Programa JPA-49: Pedir senha até acertar* ");
    printf("\n******************************************************************************* \n");

    int senha;

    do {
        printf("Digite a senha de acesso: ");
        scanf("%d", &senha);
    } while (senha != 1111);

    printf("Acesso liberado!\n");

    return 0;
}
